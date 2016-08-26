#ifndef CALIBRATION_H
#define CALIBRATION_H

#include <openag_module.h>
#include <std_msgs/Float32.h>
#include <EEPROM.h>

class Calibration : public Module {
  public:
    void begin();
    void update();
    // This output will only be active when the module is run in normal mode
    bool get_val(std_msgs::Float32 &msg);
    // This input will only be active when the module is run in calibration
    // mode
    void set_val(std_msgs::Float32 msg);

  private:
    float val;
};

#endif
