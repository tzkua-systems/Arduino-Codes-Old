#include <LiquidCrystal.h> //LiquidCrystal_I2C

LiquidCrystal lcd(0x3F,16,2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.cursor();
  lcd.blink();

  lcd.clear();
  lcd.setCursor(0,0);

  lcd.print("hello, world!");
  lcd.clear();
  lcd.
}


void loop()
{
  for (init i=0; i<15; i++)
  {
    lcd.scrollDisplayLeft();
    delay(500)
  }

  for (init i=0; i<30; i++)
  {
    lcd.scrollDisplayRight();
    delay(500)
  }

  for (init i=0; i<30; i++)
  {
    lcd.scrollDisplayLeft();
    delay(500)
  }
  
}
