#include <iostream>
#include "Learner.h"

int main() {
    Learner student(1, "Ivanov", 1);
    Learner master(2, "Petrov", 2);
    Learner postgrad1(3, "Sidorov", 3);
    Learner postgrad2(4, "Ulitkina", 4);

    // create list1 array
    Learner list1[4];
    list1[0] = student;
    list1[1] = master;
    list1[2] = postgrad1;
    list1[3] = postgrad2;

    // print items from list1
    for(int i = 0; i < 4; i++) {
        list1[i].print();
    }

    // create and initialize list2 array
    Learner list2[4] = {Learner(1, "Ivanova", 1), Learner(5, "Petrova", 3), Learner(6, "Ulitkin", 2)};

    // print items from list2
    for(int i = 0; i < 4; i++) {
        list2->print();
    }

    // create list3 array
    Learner *list3 = new Learner[4];

    // copy elements from list2 to list3
    for(int i = 0; i < 4; i++) {
        list3[i] = list2[i];
    }

    // print items from list3
    for(int i = 0; i < 4; i++) {
        list3[i].print();
    }

    // create pointer list4 and point it to list1
    Learner *list4 = list1;
    for(int i = 0; i < 4; i++) {
        list4[i].print();
    }

    delete[] list3;

    list3 = 0;
    list4 = 0;

    system("pause");
    return 0;
}