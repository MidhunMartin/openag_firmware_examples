#include <status.h>

void Status::begin() {
  status_level = OK;
  status_msg = "";
}

void Status::update() {
  // Pretend this module is really unstable and breaks over time for some
  // reason
  if (millis() > 5000) {
    status_level = WARN;
    status_msg = "Uh oh, something might be going wrong";
  }
  if (millis() > 10000) {
    status_level = ERROR;
    status_msg = "Yup, I'm broken";
  }
}
