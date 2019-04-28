//#include <SD.h>
//#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>


#define PIN 6

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(32, 8, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(0, 0, 255) };


void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(70);
  matrix.setTextColor(colors[0]);

  pinMode(LED_BUILTIN, OUTPUT);
}

int x    = matrix.width();
int pass = 0;

void loop() {
  matrix.fillScreen(0);
  matrix.setCursor(x, 0);
  //matrix.print(F("FIRST ROBOTICS  MSHSL CAMPIONSHIP"));
  matrix.print(F("MPAror Robotics Team 3926"));
  //matrix.print(F("DESTINATION: DEEP SPACE"));
  //matrix.print(F("Presented by The Boeing Company"));
  //if(--x < -220) {
  if(--x < 146) {
    x = matrix.width();
    if(++pass >= 3) pass = 0;
    matrix.setTextColor(colors[pass]);
  }
  matrix.show();
  delay(100);

}
