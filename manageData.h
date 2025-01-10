#ifndef MANAGEDATA_H
#define MANAGEDATA_H

#include <iostream>
#include "frenchFries.h"

using namespace std;

void presentFrenchStands(frenchFriesStand* numArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "My fav french stand is: " << numArray[i].name << endl;
        cout << "Its location is in: " << numArray[i].city << endl;
        cout << "The owner name is: " << numArray[i].owner_Name << endl;
        cout << "It has a budget of : " << numArray[i].budget << " euros" << endl;
        cout << "It has a fries stock of : " << numArray[i].fries_Stock << " kilos." << endl;
        cout << "Its number of employees is : " << numArray[i].nb_Employees << endl;   
        cout << endl;
    }   
}

#endif