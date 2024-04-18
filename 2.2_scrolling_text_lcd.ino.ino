#include <LiquidCrystal_I2C.h>
int i;
LiquidCrystal_I2C lcd(0x27 ,16,2);

void setup() {
 lcd.init();
 lcd.backlight();
 

}

void loop()
 {
  lcd.setCursor(0 , 0);
lcd.print("Name:Hazrat");
 lcd.setCursor(0 , 1);
lcd.print("Task:03");
  for(i=0;i<16;i++){
lcd.scrollDisplayRight();
delay(200);  }
 
lcd.clear();
}


