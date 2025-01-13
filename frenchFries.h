#ifndef FRENCHFRIESSTAND_H
#define FRENCHFRIESSTAND_H

#include <iostream>

using namespace std;

class frenchFriesStand {       
  public:// Class members         
    string name;        
    string city;  
    string owner_Name;

    int budget;
    int fries_Stock;
    int nb_Employees;

    // Constructor for frenchFriesStand class
    frenchFriesStand(string x, string y, string z, int a, int b, int c);
};

#endif // FRENCHFRIESSTAND_H