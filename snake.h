#include "Arduino.h"

int Xalt = 0;
int Yalt = 0;
byte laenge = 2;
 
void move(int laenge, int newPos[2], int snake[][2])
{
  for(int i = laenge; i >= 1; i--)
  {
    //"Verschiebt" die Koordinaten der Segmente Richtung Ende des Snake-Arrays
    snake[i][0] = snake[i-1][0];
    snake[i][1] = snake[i-1][1]; 
  }

  //Als neue Position des Kopfes wird newPos genommen
  snake[0][0] = newPos[0];
  snake[0][1] = newPos[1];
}

void gameOver(Adafruit_PCD8544 lcd)
{ 
  tone(A5,600,200);
  delay(200);
  noTone(A5);
  tone(A5,400,500);
  delay(500);
  noTone(A5);
  
  lcd.clearDisplay();

  lcd.setTextSize(1);
  lcd.setTextColor(BLACK);
  lcd.setCursor(15,10);
  lcd.println("GAME OVER!");
  lcd.setCursor(20,20);
  lcd.print("Score: ");
  lcd.print(laenge-2);
  lcd.setCursor(5,30);
  lcd.println("-Press Stick-");

  lcd.display();

  while(digitalRead(8) == 1);
        
  for(int x = 0; x < 132; x++)
  {
    lcd.drawLine(x,0,0,x,BLACK);
    lcd.display();
    delay(5);
  } 
  
  for(int x = 0; x < 132; x++)
  {
    lcd.drawLine(x,0,0,x,WHITE);
    lcd.display();
    delay(5);
  }  
}

void takeInput(int inX,int inY,int newPos[2], int snake[][2])
{
  int moveX;
  int moveY;
  
  //Bewegung immer 2, weil die Pixel doppelt genommen werden
  if(abs(inX) < abs(inY))
  {
    if(inY > 0)
    {moveY = 2;}
    else
    {moveY = -2;}
    moveX = 0;
  }
  else
  {
    if(abs(inX) > abs(inY))
    {
      if(inX > 0)
      {moveX = 2;}
      else
      {moveX = -2;}      
      moveY = 0;
    }
    
  }

  // 180 Grad-Drehungen werden nicht akzeptiert, weil sie den Spieler instant töten würden.
  if(moveX == Xalt * -1 && moveX != 0)
  {
    moveX = Xalt;
  }

  if(moveY == Yalt * -1 && moveY != 0)
  {
    moveY = Yalt;
  }

  // Bewegung um moveX/-Y
  newPos[0] = snake[0][0] += moveX;
  newPos[1] = snake[0][1] += moveY;

  // X-/Yalt werden geupdated
  Xalt = moveX;
  Yalt = moveY;

  //Wenn man über den Rand geht, kommt man auf der anderen Seite wieder raus.
  if(newPos[0] >= 84)
  {
    newPos[0] = 0;
  }
  if(newPos[0] < 0)
  {
    newPos[0] = 82;
  }
  if(newPos[1] >= 48)
  {
    newPos[1] = 0;
  }
  if(newPos[1] < 0)
  {
    newPos[1] = 46;
  }
}

void snake(Adafruit_PCD8544 lcd)
{
  //*2, weil die Pixel doppelt genommen werden.
  int fruitX = random(0,42) * 2;
  int fruitY = random(0,24) * 2;
  
  int snake[100][2] = {{}};
  int newPos[2] = {};

  unsigned long time;

  while(true)
  { 
    time = millis();

    // Range von -10 bis +10 für smootheren Vergleich
    int inX = map(analogRead(JOYX),0,1023,-10,10);
    int inY = map(analogRead(JOYY),0,1023,-10,10);
    
    takeInput(inX, inY, newPos, snake); 
     
    move(laenge, newPos, snake);
        
    lcd.clearDisplay();
    
    for(int i = 0; i < laenge; i++)
    {
      lcd.drawRect(snake[i][0],snake[i][1],2,2,BLACK);
    }
    
    lcd.fillRect(fruitX,fruitY,2,2,BLACK);
    lcd.display();
    
    //Wartet, bis der Frame 100ms dauert - auch bei lag bleibt die länge gleich
    while(millis() < time + 100);
    //delay(90);

    //Falls der Kopf die Frucht erreicht hat wird eine neue Frucht generiert und die Schlange um 1 länger
    if(snake[0][0] == fruitX && snake[0][1] == fruitY)
    {
      fruitX = random(0,42) * 2;
      fruitY = random(0,24) * 2;
      tone(A5,500,100);
      laenge += 1;
    }

    //Game Over, falls der Kopf an der gleichen Stelle wie eins der Segmente ist.
    for(int i = 2; i <= laenge; i++)
    {
      if(laenge > 2 && snake[i][0] == snake[0][0] && snake[i][1] == snake[0][1])
      {
        // Nach einem Game Over wird die Konsole neu gestartet, damit die Bitmaps neu gezeichnet werden können.
        gameOver(lcd);
        setup();
        return;
      }
    }  
  }
}
