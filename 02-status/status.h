#ifndef STATUS_H
#define STATUS_H

#include <openag_module.h>

class Status : public Module {
  public:
    void begin();
    void update();
};

#endif
