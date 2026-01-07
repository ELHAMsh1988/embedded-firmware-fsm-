typedef enum {
    STATE_IDLE,
    STATE_ACTIVE,
    STATE_ERROR
} system_state_t;

void fsm_init(void);
void fsm_update(void);

