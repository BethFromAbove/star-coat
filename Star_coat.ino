#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  strip.setPixelColor(0, strip.Color(18, 20, 25)); //Rigel
  strip.setPixelColor(1, strip.Color(16, 18, 25)); //Mintaka
  strip.setPixelColor(2, strip.Color(16, 18, 25)); //Alnilam
  strip.setPixelColor(3, strip.Color(15, 17, 25)); //Alnitak
  strip.setPixelColor(4, strip.Color(15, 18, 25)); //Bellatrix
  strip.setPixelColor(5, strip.Color(15, 18, 25)); //Meissa
  strip.setPixelColor(6, strip.Color(25, 19, 10)); //Betelgeuse
  strip.setPixelColor(7, strip.Color(16, 18, 25)); //Saiph
  strip.show();
  delay(150);

  //Below are the actual star colours, but these all just look white and are crazy bright. Divided by 10 to better show differences in colour.
  //strip.setPixelColor(0, strip.Color(182, 206, 255)); //Rigel
  //strip.setPixelColor(1, strip.Color(160, 186, 255)); //Mintaka
  //strip.setPixelColor(2, strip.Color(161, 189, 255)); //Alnilam
  //strip.setPixelColor(3, strip.Color(158, 177, 255)); //Alnitak
  //strip.setPixelColor(4, strip.Color(159, 180, 255)); //Bellatrix
  //strip.setPixelColor(5, strip.Color(157, 188, 255)); //Meissa
  //strip.setPixelColor(6, strip.Color(255, 193, 104)); //Betelgeuse
  //strip.setPixelColor(7, strip.Color(162, 188, 255)); //Saiph
  //strip.show();
  //delay(150);
}

