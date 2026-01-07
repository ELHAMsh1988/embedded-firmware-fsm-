#include "fsm.h"
#include <stdio.h>

// پیاده‌سازی توابع FSM

// تابع برای تغییر حالت
void fsm_transition(FSM *fsm, Event event) {
    switch (fsm->state) {
        case STATE_IDLE:
            if (event == EVENT_START) {
                fsm->state = STATE_RUNNING;
                printf("Transition: IDLE -> RUNNING\n");
            }
            break;

        case STATE_RUNNING:
            if (event == EVENT_STOP) {
                fsm->state = STATE_IDLE;
                printf("Transition: RUNNING -> IDLE\n");
            }
            break;

        default:
            printf("Unknown state!\n");
            break;
    }
}

// تابع برای نمایش وضعیت فعلی
void fsm_print_state(FSM *fsm) {
    switch (fsm->state) {
        case STATE_IDLE:    printf("Current State: IDLE\n"); break;
        case STATE_RUNNING: printf("Current State: RUNNING\n"); break;
        default:            printf("Current State: UNKNOWN\n"); break;
    }
}

