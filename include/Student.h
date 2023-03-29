#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>

class Student : public Person {

    std::vector<uint8_t>marks;

    static int id;
    int cur_id;

public:
    Student();
    void getData()override;
    void putData()const override;

};

#endif //STUDENT_H