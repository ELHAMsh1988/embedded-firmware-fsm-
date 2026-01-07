#ifndef FSM_H
#define FSM_H

typedef enum {
    STATE_IDLE,
    STATE_RUNNING
} system_state_t;

typedef enum {
    EVENT_START,
    EVENT_STOP
} Event;

typedef struct {
    system_state_t state;
} FSM;

void fsm_transition(FSM *fsm, Event event);
void fsm_print_state(FSM *fsm);

#endif
