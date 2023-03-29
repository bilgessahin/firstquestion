#include "Professor.h"
#include <iostream>

int Professor::id = 1;

Professor::Professor()
{
    cur_id = id++;
}

void Professor::getData()
{
    std::cout << "isim giriniz : " << "\n";
    std::cin >> name;
    std::cout << "yas giriniz : " << "\n";
    std::cin >> age;
    std::cout << "publications giriniz : " << "\n";
    std::cin >> publications;
}

void Professor::putData() const
{
    std::cout << name << age << publications << cur_id << "\n";
}