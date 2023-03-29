#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

using namespace std;

//Modify this file only to add necessary header files.
//Do not modify main function.
int main(){

    int n, val;
    cout << "obje sayisini giriniz\n";
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){
        cout << "Person tipini giriniz (1 Professor)\n";
        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getData(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putData(); // Print the required output for each object.

    return 0;

}