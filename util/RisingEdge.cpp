#include "RisingEdge.h"

void RisingEdge::input(bool val) {
  state = !triggered && val;

  if (!val) {
    triggered = 0;
  }
}
int RisingEdge::getStatus() { return state; }
