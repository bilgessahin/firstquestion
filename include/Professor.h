#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
class Professor : public Person {
    int publications = 0;
    static int id;
    int cur_id;

public:
    void getData()override;
    void putData()const override;
};

#endif //PROFESSOR_H