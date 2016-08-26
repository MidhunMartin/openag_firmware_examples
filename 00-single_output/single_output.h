#ifndef SINGLE_OUTPUT_H
#define SINGLE_OUTPUT_H

#include <openag_module.h> // Defines the Module class we want to inherit from
#include <std_msgs/Float32.h> // The message type for our output

class SingleOutput : public Module {
  public:
    void begin();  // All firmware modules must define a begin function
    void update(); // All firmware modules must define an update function

    /*
     * Since the module.json file for this module type defines a single output
     * named "output", the generated code will include a call to a function
     * named "get_output" (this one). It will pass by reference a message
     * object, which this function can mutate. The function should return true
     * if the message should be output and false otherwise.
     */
    bool get_output(std_msgs::Float32 &msg);
};

#endif
