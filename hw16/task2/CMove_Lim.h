//
// Created by Артемий on 22.12.2017.
//

#ifndef TASK2_CMOVE_LIM_H
#define TASK2_CMOVE_LIM_H


#include "CMove.h"

class CMove_Lim : public CMove {
public:
    typedef unsigned int SPEED;
    CMove_Lim();
    CMove_Lim(SPEED);
    CMove_Lim(SPEED, SPEED);
    SPEED get_max();
    void change_(SPEED);
    void change_max(SPEED);

private:
    SPEED v_max;
};


#endif //TASK2_CMOVE_LIM_H
