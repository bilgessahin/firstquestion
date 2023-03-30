#include "Professor.h"
#include <iostream>

int Professor::id = 1;

Professor::Professor()
{
    cur_id = id++;
}

void Professor::getdata()
{
    std::cout << "isim giriniz : ";
    std::cin >> name;
    std::cout << "yas giriniz : ";
    std::cin >> age;
    std::cout << "publications giriniz : ";
    std::cin >> publications;
}

void Professor::putdata() const
{
    std::cout << "ad : " << name << "\nyas : " << age << "\npublications : " << publications <<  "\ncurrent_id : " << cur_id << "\n";
}