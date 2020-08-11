#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(-1);

void setup()   
{                
  // initialize with the I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  // Clear the buffer.
  display.clearDisplay();


}

void loop() {
  
  // Display Text
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(5,7);
  display.print((char)247); // degree symbol 
  display.print("C ");
  display.println(79 + random(-4,4)); 
  display.display();
  delay(2000);
  display.clearDisplay();
  delay(3000);
  
  }