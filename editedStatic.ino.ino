// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS with no loop inside of void loop()
// CW Coleman 170413

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()

//led = 0; sets the light that changes
//red = 255; green = 16; blue = 8; white = 10; sets color
// strip.setPixelColor(led, red, green , blue, white); sets available colors
// delay(wait); delay
// strip.show(); finishes it
  
int led, red, green, blue, white;
int wait = 100;

void loop() {

  led = 0; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();
  
 led = 1; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(200);
  strip.show();
     
led = 2; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(300);
  strip.show();
  
 led = 3; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(400);
  strip.show();
  
 led = 4; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(500);
  strip.show();
  
led = 5; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(600);
  strip.show();
 
led = 6; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(700);
  strip.show();

  led = 7; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(800);
  strip.show();

   led = 8; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(900);
  strip.show();

    led = 9; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(1000);
  strip.show();

   led = 10; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(1100);
  strip.show();

 led = 11; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(1200);
  strip.show();
   
   led = 12; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(1300);
  strip.show();
   
  led = 13; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(1400);
  strip.show();
   
 led = 14; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(1500);
  strip.show();
  
  led = 15; red = 16; green = 255; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(1000);
  strip.show();

   led = 15; red = 0; green = 0; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(800);
  strip.show();

    led = 15; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(800);
  strip.show();

  led = 15; red = 0; green = 0; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(500);
  strip.show();

   led = 15; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(800);
  strip.show();

  led = 15; red = 0; green = 0; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(500);
  strip.show();

   led = 15; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(800);
  strip.show();

  // next segment

   led = 14; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 13; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 12; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 11; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 10; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 9; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 8; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 7; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 6; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

  led = 5; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

   led = 4; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

   led = 3; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

   led = 2; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

   led = 1; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

   led = 0; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(100);
  strip.show();

    led = 0; red = 255; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(2000);
  strip.show();
}
