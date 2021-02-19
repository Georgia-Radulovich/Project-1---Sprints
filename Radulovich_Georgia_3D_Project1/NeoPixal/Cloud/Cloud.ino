/*Gergia Radulovich - 3D Design 2
*Project 1 - Sprint Challenge Code
*Motified from StrandTest1 in class example */

#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT 2

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();          
  strip.show();            
  strip.setBrightness(100);
}

void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { 
    strip.setPixelColor(i, color);         
    strip.show();                          
    delay(200);                           
  }
}

void loop() {
  colorWipe(strip.Color(255,   0,   0), 100); // Red
  colorWipe(strip.Color(  0, 255,   0), 100); // Green

}

  
