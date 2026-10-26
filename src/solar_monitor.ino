#include <Wire.h>
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  Serial.println("Solar Energy Monitoring System");

  if (!ina219.begin()) {
    Serial.println("ERROR: INA219 not detected!");
    while (1) {
      delay(10);
    }
  }

  Serial.println("Voltage(V), Current(mA), Power(mW)");
}

void loop() {
  float voltage = ina219.getBusVoltage_V();
  float current = ina219.getCurrent_mA();
  float power = ina219.getPower_mW();

  Serial.print(voltage, 2);
  Serial.print(", ");
  Serial.print(current, 2);
  Serial.print(", ");
  Serial.println(power, 2);

  delay(1000);
}
