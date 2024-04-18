#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 ,16,2);
//custom charactor
int i;
byte heart[8]={0x00,
0x0a,
0x1f,
0x1f,
0x0e,
0x04,
0x00,
0x00

};
byte alert[8]={0x00,
0x04,
0x0e,
0x0e,
0x0e,
0xff,
0x00,
0x04

};
void setup() {
 lcd.init();
 lcd.backlight();
 lcd.createChar(0 , heart);
 lcd.createChar(1 , alert);

}


void loop()
 {
  
  for(i=0;i<16;i++){
    lcd.setCursor(i, 0);
lcd.write(byte(0));
    lcd.setCursor(15-i, 1);
lcd.write(byte(1));
  delay(500);
lcd.clear();
delay(200);
  }
    lcd.clear();
}


