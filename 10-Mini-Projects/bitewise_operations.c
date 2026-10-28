#include <stdio.h>
#include <stdint.h>

void turn_on_led(uint8_t *register_ptr, int position) {
    *register_ptr = *register_ptr | (0x01 << position);
}

void turn_off_led(uint8_t *register_ptr, int position) {
    *register_ptr = *register_ptr & ~(0x01 << position);
}

void toggle_led(uint8_t *register_ptr, int position) {
    *register_ptr = *register_ptr ^ (0x01 << position);
}

int read_led_state(uint8_t register_val, int position) {
    uint8_t x = register_val & (0x01 << position);

    if (x == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main(void) {
    uint8_t led_port = 0x00;

    turn_on_led(&led_port, 0);
    turn_on_led(&led_port, 4);

    toggle_led(&led_port, 4);
    toggle_led(&led_port, 7);

    turn_off_led(&led_port, 0);

    for (int i = 0; i < 8; i++) {
        printf("Led %d: %d \n", i, read_led_state(led_port, i));
    }

    return 0;
}