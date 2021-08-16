#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

#define JOYX A0
#define JOYY A1
#define SPEAKER A5

Adafruit_PCD8544 lcd = Adafruit_PCD8544(3,4,5,6,7); 

#include "bitmaps.h"
#include "snake.h"
#include "breakout.h"

// Clock --> Reset

int cursor = 1;
byte cursorDavor = 1;

const byte totalGames = 2;

void setup()
{
  // Setup stuff
  Serial.begin(9600);
  lcd.begin();
  lcd.setContrast(59);  
  lcd.setRotation(2); // Screen ist um 180 Grad gedreht
  lcd.clearDisplay();
  
  // 9-12 = Buttons, 8 = Joystick Press
  pinMode(8,INPUT_PULLUP);//breakout(lcd);  
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  
  // Boot Screen
  lcd.drawBitmap(0,0,bmpBoot,84,48,BLACK);
  lcd.display();

  //Jingle
  tone(A5,400,100);
  delay(100);
  tone(A5,600,200);
  delay(200);
  
  delay(2000);
  
  // Textbox wird gezeichnet
  lcd.clearDisplay();
  lcd.drawBitmap(0,0,bmpTextbox,84,48,BLACK);
  lcd.drawBitmap(6,8,bmpTextSnake,48,7,BLACK);
  lcd.drawBitmap(6,16,bmpTextBreakout,48,7,BLACK);

  // Cursor startet auf Snake
  lcd.drawBitmap(3,8,bmpCursor,2,7,BLACK);
  lcd.drawBitmap(0,0,bmpPreviewSnake,84,48,BLACK);
  
  lcd.display();
}

void loop()
{
  
  
  // Cursor wird gesteurt, der alte wird sich gemerkt, damit später die Bitmaps nur neu gezeichnet werden, wenn es Relevant ist
  cursorDavor = cursor;
  cursor += map(analogRead(JOYY),0,1023,-1,1);

  // 1.7.2020 - 2.7.2020
  // Merke: Wenn der RAM überfordert ist (?) gibt es seltsame Bugs 
     
  if(digitalRead(9) == 0)
  {
    if(cursor == 1){snake(lcd);}
    if(cursor == 2){breakout(lcd);}  
  }
   

  // Der Cursor wrappt around
  if(cursor > totalGames){cursor = 1;}
  if(cursor < 1){cursor = totalGames;}

  if(cursor != cursorDavor)
  {
    //Löschen der alten Bitmaps
    lcd.fillRect(62,5,18,37,WHITE);
    lcd.fillRect(3,5,2,37,WHITE);
    
    // Cursor und die Passende Preview wird gezeichnet
    lcd.drawBitmap(3,cursor * 8,bmpCursor,2,7,BLACK);
    if(cursor == 1){lcd.drawBitmap(0,0,bmpPreviewSnake,84,48,BLACK);}
    if(cursor == 2){lcd.drawBitmap(0,0,bmpPreviewBreakout,84,48,BLACK);}
    
    lcd.display();
  } 
  delay(100);
}
