#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_BNO055.h>
#include <Adafruit_Sensor.h>

Adafruit_BNO055 bno = Adafruit_BNO055(55);

void setup() {
  Serial.begin(115200);   // Goes to XBee UART in transparent mode
  Wire.begin();

  if (!bno.begin()) {
    Serial.println("BNO055 not found");
    while (1);
  }
  bno.setExtCrystalUse(true);
}

void loop() {
  imu::Quaternion quat = bno.getQuat();
  
  // Send compact CSV: w,x,y,z\n
  Serial.print(quat.w(), 4); Serial.print(",");
  Serial.print(quat.x(), 4); Serial.print(",");
  Serial.print(quat.y(), 4); Serial.print(",");
  Serial.println(quat.z(), 4);

  delay(20); // ~50 Hz
}
