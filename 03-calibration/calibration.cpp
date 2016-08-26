#include "calibration.h"

void Calibration::begin() {
  val = EEPROM[0];
}

void Calibration::update() {
#ifdef OPENAG_CATEGORY_CALIBRATION
  // This code in only included when the module is run in calibration mode
  Serial.println("Running in calibration mode");
#endif
}

bool Calibration::get_val(std_msgs::Float32 &msg) {
  msg.data = val;
  return true;
}

void Calibration::set_val(std_msgs::Float32 msg) {
  val = msg.data;
  EEPROM[0] = val;
}
