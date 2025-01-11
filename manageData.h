#ifndef MANAGEDATA_H
#define MANAGEDATA_H

#include <iostream>
#include <list>
#include "frenchFries.h"

using namespace std;

// get a certain French Fries Stand and display its data
void getFrenchStand(const list<frenchFriesStand>& stand,  int standNumber)
{
    
    if (stand.empty())
    {//check if the list isn't empty
        cout << "The French Fries Stand list is empty !" << endl;
        return;
    }

    if (standNumber < 0 || standNumber >= static_cast<int>(stand.size()))
    {//check if the target index is valid and exists
        cout << "Invalid stand number!" << endl;
        return;
    }

    // Get the stand at the specified index
    auto it = stand.begin();
    advance(it, standNumber); // Move iterator to the desired index

    //Display the data
    cout << "My fav french stand is: " << it->name << endl;
    cout << "Its number in the list is: " << standNumber << endl;
    cout << "Its location is in: " << it->city << endl;
    cout << "The owner name is: " << it->owner_Name << endl;
    cout << "It has a budget of : " << it->budget << " euros" << endl;
    cout << "It has a fries stock of : " << it->fries_Stock << " kilos." << endl;
    cout << "Its number of employees is : " << it->nb_Employees << endl;   
    cout << endl;

}

// display the data for all French Fries stand within the list
void presentFrenchStandsList(const list<frenchFriesStand>& standList, int size)
{
    if (standList.empty())
    {//check if the list isn't empty
        cout << "The French Fries Stand list is empty !" << endl;
        return;
    }

    for (int i = 0; i < size; i++)
    {// check the data of each stand from the list
        getFrenchStand(standList, i);
    }   
}

//add a new French Fries Stand with its attributes at the end of a list
void addFrenchStand(list<frenchFriesStand>& standList, string name, string city, string owner, int budget, int stock, int employees)
{
    //Create a new french fries stand based on the user's parameters
    frenchFriesStand newStand = frenchFriesStand(name, city, owner, budget, stock, employees);
    standList.push_back(newStand); 
}

void removeFrenchStand(list<frenchFriesStand>& standList, int standNumber)
{
    if (standList.empty())
    {//check if the list isn't empty
        cout << "The French Fries Stand list is empty !" << endl;
        return;
    }

    if (standNumber < 0 || standNumber >= static_cast<int>(standList.size()))
     {//check if the target index is valid and exists
        cout << "Invalid stand number!" << endl;
        return;
    }

    // Get the stand at the specified index
    auto it = standList.begin();
    advance(it, standNumber); // Move iterator to the desired index

    // erase the stand at index n from the list
    standList.erase(it); 

}

#endif