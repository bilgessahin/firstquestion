#include "Student.h"

Student::Student()
{
    cur_id++;
}

void Student::getData(const std::string& name, const int& age, std::vector<uint8_t>& marks)
{
    this->name = name;
    this->age = age;
    this->marks = std::move(marks);
}

void Student::putData()
{
    int sum = 0;

    for (int value : marks) {
        sum += value;
    }
    std::cout << name << age << sum << cur_id << "\n";
}