#include <stdio.h>

typedef enum {
    LOW,
    NORMAL,
    OVERPRESSURE
} TankState;

TankState update_state(TankState state, float pressure) {
    switch (state) {
        case LOW:
            if (pressure >= 2.0f) {
                return NORMAL;
            }
            break;

        case NORMAL:
            if (pressure >= 5.0f) {
                return OVERPRESSURE;
            } else if (pressure < 1.5f) {
                return LOW;
            }
            break;

        case OVERPRESSURE:
            if (pressure < 4.0f) {
                return NORMAL;
            }
            break;

        default:
            break;
    }

    return state;
}

const char* state_to_string(TankState state) {
    switch (state) {
        case LOW:
            return "LOW";

        case NORMAL:
            return "NORMAL";

        case OVERPRESSURE:
            return "OVERPRESSURE";

        default:
            return "INVALID";
    }
}

int main(void) {
    TankState state = LOW;

    float pressure_array[] = {1.0f, 2.1f, 3.8f, 5.2f, 4.5f, 3.9f, 1.2f};

    int size = sizeof(pressure_array) / sizeof(pressure_array[0]);

    for (int i = 0; i < size; i++) {
        state = update_state(state, pressure_array[i]);
        printf("State: %s | Pressure: %.1f\n", state_to_string(state), pressure_array[i]);
    }

    return 0;
}