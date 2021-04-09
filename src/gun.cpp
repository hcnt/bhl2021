#include "gun.h"

void Gun::init(unsigned short v_pin, unsigned short h_pin, unsigned short v_angle = 0, unsigned short h_angle = 0) {
    vertical.attach(v_pin);
    horizontal.attach(h_pin);
    vertical.write(v_angle);
    vertical.write(h_angle);
//        this->v_pin = v_pin;
//        this->h_pin = h_pin;
//        this->v_angle = v_angle;
//        this->h_angle = h_angle;
}

void Gun::move(unsigned short v_angle, unsigned short h_angle) {
    vertical.write(v_angle);
//        delay(move_delay);
    horizontal.write(h_angle);
//        delay(move_delay);
}

void Gun::move_v(unsigned short v_angle) {
    vertical.write(v_angle);
//        delay(move_delay);
}

void Gun::move_h(unsigned short h_angle) {
    horizontal.write(h_angle);
//        delay(move_delay);
}
