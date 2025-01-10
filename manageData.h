#ifndef MANAGEDATA_H
#define MANAGEDATA_H

#include <iostream>
#include <list>
#include "frenchFries.h"

using namespace std;

void getFrenchStand(const list<frenchFriesStand>& stands,  int standNumber)
{
    // Get the stand at the specified index
    auto it = stands.begin();
    advance(it, standNumber); // Move iterator to the desired index

    cout << "My fav french stand is: " << it->name << endl;
    cout << "Its location is in: " << it->city << endl;
    cout << "The owner name is: " << it->owner_Name << endl;
    cout << "It has a budget of : " << it->budget << " euros" << endl;
    cout << "It has a fries stock of : " << it->fries_Stock << " kilos." << endl;
    cout << "Its number of employees is : " << it->nb_Employees << endl;   
    cout << endl;

}

void presentFrenchStandsList(const list<frenchFriesStand>& standList, int size)
{
    for (int i = 0; i < size; i++)
    {
        getFrenchStand(standList, i);
    }   
}

void addFrenchStand(const list<frenchFriesStand>& stands, string name, string city, string owner, int budget, int stock, int employees)
{

}

#endif