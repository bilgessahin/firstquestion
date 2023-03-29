#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>

class Student : public Person {
std::vector<uint8_t>marks;
int cur_id = 0;
public:
    void getData(std::string name, int age, std::vector<uint8_t>marks);
    void putData(std::string name, int age, int sumOfMarks, int cur_id)const;

};

#endif //STUDENT_H