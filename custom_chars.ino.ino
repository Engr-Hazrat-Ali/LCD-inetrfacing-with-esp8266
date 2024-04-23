#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
//custom charactor
int i,j;





byte customChars[8][8] = {
   { 0x00,0x0a,0x1f,0x1f,0x0e,0x04,0x00,0x00},    //heart
    { 0x00, 0x04,0x0e,0x0e,0x0e,0x1f,0x00,0x04},   //alert
    { 0x01,0x03,0x0f,0x0f,0x0f,0x03,0x01,0x00},     //cartoon1
    { 0x1f,0x15, 0x1f,0x1f,0x0e,0x0a,0x1b,0x00},    //speaker
    { 0x01, 0x03,0x05,0x09,0x09,0x0b,0x1b,0x18},    //bluetooth
     { 0x00, 0x01,0x03,0x16,0x1c,0x08,0x00,0x00},   //tick
     { 0x0e,0x11,0x11,0x1f,0x1b, 0x1b,0x1f,0x00},   //lock
     { 0x00,0x0e,0x15,0x1b,0x0e,0x0e,0x00,0x00}     //cartoon2
};
// int scrollPosition = 0; // Track scrolling position for circular behavior

void setup() {
  lcd.init();
  lcd.backlight();
  // Create custom characters
  for (int i = 0; i < 8; i++) {
    lcd.createChar(i, customChars[i]);
  }
}

void loop() {
  
  for(i=0;i<16;i+=2){
        for (j = 0; j < 8; j++) {
      lcd.setCursor(((j*2)+i)%16 , 0);
      lcd.write(byte(j));
      lcd.setCursor(((15-j*2)+i)%16, 1);
      lcd.write(byte(j));
      
    
    }
    
  
 delay(860);
 lcd.clear();
}}

// void loop() {
//   lcd.clear(); // Clear the entire display at the beginning

//   // Iterate through characters and write them with a shift
//   for (int i = 0; i < 16; i+=2) {
//     int charIndex = (scrollPosition) % 8;  // Circular index for characters
//     lcd.setCursor(i, 0);
//     lcd.write(byte(charIndex));
//   }

//   // // Write characters in reverse order on the second line (optional)
//   // for (int i = 0; i <= 15; i+=2) {
//   //   int charIndex = (scrollPosition + i) % 8;
//   //   lcd.setCursor(15-i, 1);
//   //   lcd.write(byte(charIndex));
//   // }

//   scrollPosition++; // Update scroll position for next iteration
//   scrollPosition %= 8; // Wrap around if scrollPosition reaches 8

//   delay(560); // Adjust delay for desired scroll speed
// }