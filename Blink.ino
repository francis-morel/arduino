#include "./RisingEdge.h"

int toggle = 0;
RisingEdge ri;

void setup() {
    pinMode(2, INPUT_PULLUP);
    pinMode(11, OUTPUT);
}

void loop() {
    ri.input(!digitalRead(2));

    if (ri.getStatus()) {
        toggle = !toggle;
    }

    digitalWrite(11, toggle);

}
