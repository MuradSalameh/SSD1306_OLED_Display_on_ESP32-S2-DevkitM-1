/*
- Board: ESP32-S2-DevkitM-1 by Espressif Systems

Required libraries (sketch -> include library -> manage libraries)
 - Adafruit SSD1306
 - Adafruit GFX Library


*/
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// Define I2C (SDA, SCL pins) in ESP32-S2-DevkitM-1
#define I2C_SDA 8   // connect to available PIN
#define I2C_SCL 7

#define OLED_RESET   -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_WIDTH 128 // OLED display Breite, in pixels
#define SCREEN_HEIGHT 64 // OLED display Höhe, in pixels

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);
  Wire.begin(I2C_SDA, I2C_SCL);   // initialize I2C (SDA, SCL pins) on ESP32-S2-DevkitM-1
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // I2C address = 0x3C
  delay(1000);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Hello World");
  display.display(); 
}

void loop() {
}