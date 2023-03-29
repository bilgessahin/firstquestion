#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
class Professor : public Person {
int publications = 0;
static int cur_id = 1;

public:
    void getData(std::string name, int age, int publications);
    void putData()const;
};

#endif //PROFESSOR_H