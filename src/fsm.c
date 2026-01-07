#include "fsm.h"
#include <stdio.h>

void fsm_transition(FSM *fsm, Event event) {
    if (fsm->state == STATE_IDLE && event == EVENT_START) {
        fsm->state = STATE_RUNNING;
        printf("Transition: IDLE -> RUNNING\n");
    } else if (fsm->state == STATE_RUNNING && event == EVENT_STOP) {
        fsm->state = STATE_IDLE;
        printf("Transition: RUNNING -> IDLE\n");
    }
}

void fsm_print_state(FSM *fsm) {
    if (fsm->state == STATE_IDLE) printf("Current State: IDLE\n");
    else if (fsm->state == STATE_RUNNING) printf("Current State: RUNNING\n");
}
