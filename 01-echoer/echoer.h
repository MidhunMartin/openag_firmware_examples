#ifndef ECHOER_H
#define ECHOER_H

#include <openag_module.h>
#include <std_msgs/Float32.h>

class Echoer : public Module {
  public:
    Echoer(float initial_val);
    void begin();
    void update();
    bool get_val(std_msgs::Float32 &msg);
    void set_val(std_msgs::Float32 msg);

  private:
    float val;
};

#endif
