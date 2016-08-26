#include "echoer.h"

Echoer::Echoer(float initial_val) : val(initial_val) { }

void Echoer::begin() { }

void Echoer::update() { }

bool Echoer::get_val(std_msgs::Float32 &msg) {
  msg.data = val;
  return true;
}

void Echoer::set_val(std_msgs::Float32 msg) {
  val = msg.data;
}
