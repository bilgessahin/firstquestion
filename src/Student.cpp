#include "Student.h"
#include <vector>

cur_id = 1;

Student::Student()
{
    cur_id++;
}

void Student::getData()
{
    int numberOfMarks;

    std::cout << "isim giriniz : " << "\n";
    std::cin >> name;
    std::cout << "yas giriniz : " << "\n";
    std::cin >> age;
    std::cout << "kac adet not girilecek : " << "\n";
    std::cin >> numberOfMarks;

     for (int i = 0; i < numberOfMarks; i++) {
        uint8_t mark;
        std::cout << "not giriniz : " << "\n";
        std::cin >> mark;
        marks.push_back(mark);
    }
}

void Student::putData()
{
    int sum = 0;

    for (int value : marks) {
        sum += value;
    }
    std::cout << name << age << sum << cur_id << "\n";
}