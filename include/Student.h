#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>

class Student : public Person {

    std::vector<int>marks;

    static int id;
    int cur_id;

public:
    Student();
    void getdata()override;
    void putdata()const override;

};

#endif //STUDENT_H