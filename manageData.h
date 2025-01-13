#ifndef MANAGEDATA_H
#define MANAGEDATA_H

#include <iostream>
#include <algorithm>
#include <list>
#include "frenchFries.h"

using namespace std;

//---------------------BASIC FUNCTIONS--------------------------------------

// get a certain French Fries Stand and display its data
void getFrenchStand(const list<frenchFriesStand>& stand,  int standNumber);

// display the data for all French Fries stand within the list
void presentFrenchStandsList(const list<frenchFriesStand>& standList, int size);

//add a new French Fries Stand with its attributes at the end of a list
void addFrenchStand(list<frenchFriesStand>& standList, string name, string city, string owner, int budget, int stock, int employees);

void removeFrenchStand(list<frenchFriesStand>& standList, int standNumber);

//---------------------UPDATE FUNCTIONS--------------------------------------

// Update the name of one french fries stand
void updateFrenchStandName(list<frenchFriesStand>& standList, int standNumber, string newName);

// Update the local city of one french fries stand
void updateFrenchStandCity(list<frenchFriesStand>& standList, int standNumber, string newCity);

// Update the owner of one french fries stand
void updateFrenchStandOwner(list<frenchFriesStand>& standList, int standNumber, string newOwner);

// Update the budget of one french fries stand
void updateFrenchStandBudget(list<frenchFriesStand>& standList, int standNumber, int newBudget);

// Update the fries stock of one french fries stand
void updateFrenchStandStock(list<frenchFriesStand>& standList, int standNumber, int newStock);

// Update the name of one french fries stand
void updateFrenchStandStaff(list<frenchFriesStand>& standList, int standNumber, int staffUpdate);

#endif