
#include <LiquidCrystal_I2C.h>

// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;

// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Task : 01");
  lcd.setCursor(0, 1);
  lcd.print("LCD display init");
  
}

void loop(){
  // set cursor to first column, first row
  lcd.setCursor(0, 0);
  // print message
  lcd.print("Hello, linkedin!");
  lcd.setCursor(3,1);
  lcd.print("Community");
  delay(1000);
  lcd.clear(); 
  lcd.setCursor(0, 0);
  lcd.print("Engr Hazrat Ali,");
  lcd.setCursor(1, 1);
  lcd.print("IOT developer");
  delay(1000);
lcd.clear();
}