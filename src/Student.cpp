#include "Student.h"
#include <vector>
#include <iostream>


int Student::id = 1;

Student::Student()
{
    cur_id = id++;
}

void Student::getdata()
{
    int numberOfMarks;

    std::cout << "isim giriniz : ";
    std::cin >> name;
    std::cout << "yas giriniz : ";
    std::cin >> age;
    std::cout << "kac adet not girilecek : ";
    std::cin >> numberOfMarks;

    int mark;
    std::cout << "notlari giriniz : ";
     for (int i = 0; i < numberOfMarks; i++) {
        std::cin >> mark;
        marks.push_back(mark);
    }
}

void Student::putdata() const
{
    int sum = 0;

    for (int i=0; i<marks.size(); i++) {
        sum += marks[i];
    }
    std::cout << "ad : " << name << "\nyas : " << age << "\nnotlar toplami : " << sum << "\ncurrent id : " << cur_id << "\n";
}