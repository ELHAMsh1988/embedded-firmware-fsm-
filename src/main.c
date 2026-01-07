int main(void)
{
    system_init();
    fsm_init();

    while (1)
    {
        fsm_update();
    }
}

