#include "Professor.h"

Professor::Professor()
{
    cur_id++;
}

void Professor::getData(std::string name, int age, int publications)
{
    this->name = name;
    this->age = age;
    this->publications = publications;
}

void Professor::putData()
{
    std::cout << this->name << this->age << this->publications << this->cur_id << "\n";
}