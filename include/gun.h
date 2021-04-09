#ifndef BHL2021_GUN_H
#define BHL2021_GUN_H
#include "Servo.h"

class Gun {
public:
    void init(unsigned short v_pin, unsigned short h_pin, unsigned short v_angle = 0, unsigned short h_angle = 0);
    void move(unsigned short v_angle, unsigned short h_angle);
    void move_v(unsigned short v_angle);
    void move_h(unsigned short h_angle);
private:
    Servo vertical;
    Servo horizontal;
    unsigned int move_delay = 500;
//    unsigned short v_angle = 0;
//    unsigned short h_angle = 0;
//    unsigned short v_pin = 0;
//    unsigned short h_pin = 0;
};

#endif //BHL2021_GUN_H
