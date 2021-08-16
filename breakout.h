// 22.05.2020

#include "Arduino.h"

int moveX = -1;
int moveY = -1;
byte resetPanel = 0;
byte bricks[28][6]; 
byte brokenBricks = 0;

void breakBricks(byte ballPos[2])
{
  //x(Brick) = index * 3 und index * 3 + 2
  //y(Brick) = index * 3 + 3 und index * 3 + 3 + 2

  if(bricks[(ballPos[0] + moveX) / 3][(ballPos[1] - 6) / 3] == BLACK && (ballPos[1] - 6) / 3 < 6)
    {
      bricks[(ballPos[0] + moveX) / 3][(ballPos[1] - 6) / 3] = WHITE;
      moveX *= -1;
      tone(SPEAKER,500,50);
      brokenBricks += 1;
    }
   
  if(bricks[ballPos[0] / 3][(ballPos[1] - 6 + moveY) / 3] == BLACK && (ballPos[1] - 6 + moveY) / 3 < 6)
    {
      bricks[ballPos[0] / 3][(ballPos[1] - 6 + moveY) / 3] = WHITE;
      moveY *= -1;
      tone(SPEAKER,500,50);
      brokenBricks += 1;
    }
}

void moveBall(byte ballPos[2], byte panelPos)
{
  int nextPos[2] = {ballPos[0] + moveX, ballPos[1] + moveY};
  
  if(nextPos[0] < 0 || nextPos[0] > 82)
  {moveX *= -1;}
  
  if(nextPos[1] < 0) 
  {moveY *= -1;}

  if(nextPos[1] > 46)
  {
   //Falls der Ball unten ankommt den Bildschirm leeren...
   lcd.clearDisplay();
   lcd.display();

   //...kurzen Jingle spielen...
   tone(SPEAKER, 600);
   delay(150);
   tone(SPEAKER, 200);
   delay(300);
   noTone(SPEAKER);
   delay(1550);

   //...und alles zurücksetzen
   ballPos[0] = 42;
   ballPos[1] = 42;

   //Panel kann von hier aus nicht gemoved werden ¯\_(ツ)_/¯ 
   resetPanel = 1;
   
   moveY *= -1;
   lcd.display();
  }
  
  if(nextPos[1] == 44 && panelPos <= nextPos[0] + 2 && nextPos[0] <= panelPos + 12)
  {
    Serial.println(String(panelPos - nextPos[0]));
    moveY *= -1;
    tone(SPEAKER,400,50);
  }
  
  ballPos[0] += moveX;
  ballPos[1] += moveY;
}

int movePanel(byte panelPos)
{  
  lcd.fillRect(panelPos,44,12,2,BLACK);

  int newPanel = panelPos + map(analogRead(JOYX),0,1023,-2,2);
  return min(71,max(newPanel,1));
}

void breakout(Adafruit_PCD8544 lcd)
{
  byte ballPos[2] = {42,42};
  byte panelPos = 36;
  byte emptyBricks = 0;
  unsigned long time;

  for(int x = 0; x < 28; x++)
  {
    for(int y = 0; y < 6; y++)
    {
      bricks[x][y] = BLACK;
    }
  }
  
  while(true)
  {
    time = millis();
    lcd.clearDisplay();
    breakBricks(ballPos);
    moveBall(ballPos, panelPos);

    //Panel kann nur in dieser Funktion gemoved werden
    if(resetPanel == 1)
    {
     panelPos = 36;
     resetPanel = 0;
    }
    panelPos = movePanel(panelPos);

    //Bricks zeichnen
    for(int brickX = 0; brickX < 28; brickX++)
    {
      for(int brickY = 0; brickY < 6; brickY++)
      {
        lcd.fillRect(brickX*3,brickY*3+6,3,3,bricks[brickX][brickY]);
      }
    }
    
    //Ball zeichnen
    lcd.fillRect(ballPos[0],ballPos[1],3,3,BLACK);
    
    lcd.display();

    // Hat der Spieler gewonnen?
    // Ich sollte das wahrscheinlich in ne eigene Funktion packen
    // Hab aber keinen Bock mich mit Argumenten und lokalen/globalen variablen rumzuschlagen
    // Also passt scho

    if(brokenBricks == 28*6)
    {
      //Jingle Spielen
      tone(SPEAKER,400);
      delay(200);
      noTone(SPEAKER);
      tone(A5,600);
      delay(500);
      noTone(SPEAKER);

      //Text displayen
      lcd.clearDisplay();
      lcd.setTextSize(1);
      lcd.setTextColor(BLACK);
      lcd.setCursor(15,10);
      lcd.println("Ayyyyyyy");
      lcd.setCursor(5,30);
      lcd.println("-Press Stick-");
      lcd.display();

      //Resetten, sobald der Stick gedrückt wird
      while(digitalRead(8) == 1);

      //Reset - Animation
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

      // Zurück ins Hauptmenü!
      setup();
      return;
      
    }
    
    // 30 Millis pro "frame" warten
    while(millis() < time + 30);

  }
}
