//
// Created by Артемий on 19.12.2017.
//
#include <iostream>

#ifndef TASK1_LEARNER_H
#define TASK1_LEARNER_H

using namespace std;

class Learner {
public:
    Learner();
    Learner(short, string, int);
    void print();

    void setID(short);
    void setName(string);
    void setLevel(int);

    short getID() const;
    string getName() const;
    int getLevel() const;

private:
    short ID;
    string name;
    int level;
};


#endif //TASK1_LEARNER_H
