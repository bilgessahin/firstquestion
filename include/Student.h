#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>

class Student : public Person {

std::vector<uint8_t>marks;
static int cur_id = 1;

public:
    void getData(const std::string& name, const int& age, std::vector<uint8_t>& marks);
    void putData()const;

};

#endif //STUDENT_H