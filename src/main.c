#include "fsm.h"
#include <stdio.h>

int main(void) {
    FSM controller;
    controller.state = STATE_IDLE;

    fsm_print_state(&controller);

    fsm_transition(&controller, EVENT_START);
    fsm_print_state(&controller);

    fsm_transition(&controller, EVENT_STOP);
    fsm_print_state(&controller);

    return 0;
}
