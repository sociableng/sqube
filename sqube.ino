#include "FastLED.h" //fast led library 
#define NUM_LEDS 6 //total no. of leds used
#define DATA_PIN 5 //digital pin at which the data pin is connected
#define mic A5 //analog input from mic module
int mic_Value=0; //to save raw value from mic
int red, green, blue; //to store RGB color values
CRGB leds[NUM_LEDS]; //fast led function 

void setup() { //uncomment the line referring to your LED strip
  //FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<WS2801, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  //FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2811, DATA_PIN, BGR>(leds, NUM_LEDS); //as our led IC is WS2811,fast led support lots of ICs
  LEDS.setBrightness(200); //setting brightness of LED (0 to 255) //info at fastled.io
  randomSeed(analogRead(0));// for generating random no. by taking noise from analog pin 0
  for (int i = 0; i <= (NUM_LEDS-1); i++) //for changing color of all NUM_LEDS LEDs
  {
    leds[i] = CRGB(0, 0, 0); //for initial white color
    LEDS.show(); //fastled function, without this function the colors won't be updated
  }

}

void loop() {

  mic_Value = analogRead(A5); //storing analog values from mic to mic_value
  if(mic_Value>100) //to avoid small noise
  {
    for(int i=0;i<=(NUM_LEDS-1) ;i++)//for changing color of all LEDs
    {
    
    red=random(255); //random red color value between 0 to 255
    green=random(255); //random green color value between 0 to 255
    blue=random(255); //random blue color value between 0 to 255
    leds[i]=CRGB(red,green,blue); //assigning color values to LEDs
    LEDS.show();
  }
  
 }
}
