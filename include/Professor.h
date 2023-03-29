#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
class Professor : public Person {
int publications = 0;
int cur_id = 0;

public:
    void getData(std::string name, int age, int publications);
    void putData(std::string name, int age, int publications)const;
};

#endif //PROFESSOR_H