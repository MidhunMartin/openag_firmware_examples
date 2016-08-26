#include "single_output.h"

void SingleOutput::begin() { }

void SingleOutput::update() { }

bool SingleOutput::get_output(std_msgs::Float32 &msg) {
  msg.data = 42; // Set the value of the message
  return true; // Tell the calling program to output the message
}
