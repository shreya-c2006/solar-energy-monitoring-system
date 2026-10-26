#include <Wire.h>
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;

void setup() {
  Serial.begin(9600);

  if (!ina219.begin()) {
    Serial.println("INA219 sensor not found!");
    while (1) {
      delay(10);
    }
  }

  Serial.println("Solar Energy Monitoring System");
  Serial.println("Voltage (V), Current (mA), Power (mW)");
}

void loop() {
  float busVoltage = ina219.getBusVoltage_V();
  float current_mA = ina219.getCurrent_mA();
  float power_mW = ina219.getPower_mW();

  Serial.print(busVoltage, 2);
  Serial.print(", ");
  Serial.print(current_mA, 2);
  Serial.print(", ");
  Serial.println(power_mW, 2);

  delay(1000);
}
