#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    virtual void getData() = 0;
    virtual void putData()const = 0;
};

#endif // PERSON_H
