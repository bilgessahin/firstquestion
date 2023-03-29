#include "Student.h"
#include <vector>
#include <iostream>


int Student::id = 1;

Student::Student()
{
    cur_id = id++;
}

void Student::getData()
{
    int numberOfMarks;

    std::cout << "isim giriniz : ";
    std::cin >> name;
    std::cout << "yas giriniz : ";
    std::cin >> age;
    std::cout << "kac adet not girilecek : ";
    std::cin >> numberOfMarks;

    uint8_t mark;
     for (int i = 0; i < numberOfMarks; i++) {
        std::cout << i << "\n.notu giriniz : ";
        std::cin >> mark;
        //marks.push_back(mark);
    }
}

void Student::putData() const
{
    int sum = 0;

    for (int value : marks) {
        sum += value;
    }
    std::cout << "ad : " << name << "\nyas : " << age << "\nnotlar toplami : " << sum << "\ncurrent id : " << cur_id << "\n";
}