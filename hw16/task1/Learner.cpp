//
// Created by Артемий on 19.12.2017.
//

#include "Learner.h"

Learner::Learner(){

}

Learner::Learner(short idArg, string nameArg, int levelArg) {
    setID(idArg);
    setName(nameArg);
    setLevel(levelArg);
}

void Learner::print() {
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Level: " << level << endl;
}

void Learner::setID(short idArg) {
    ID = idArg;
}

void Learner::setName(string nameArg) {
    name = nameArg;
}

void Learner::setLevel(int levelArg) {
    if(levelArg < 1 || levelArg > 3) {
        level = 1;
    } else {
        level = levelArg;
    }
}

short Learner::getID() const {
    return ID;
}

string Learner::getName() const {
    return name;
}

int Learner::getLevel() const {
    return level;
}

