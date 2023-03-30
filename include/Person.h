#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    virtual void getdata() = 0;
    virtual void putdata()const = 0;
};

#endif // PERSON_H
