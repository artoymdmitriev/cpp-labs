//
// Created by Артемий on 22.12.2017.
//

#ifndef TASK2_CMOVE_H
#define TASK2_CMOVE_H


class CMove {
public:
    typedef unsigned int SPEED;
    CMove();
    CMove(SPEED);
    SPEED get_();
    void change_();

private:
    SPEED v;

};


#endif //TASK2_CMOVE_H
