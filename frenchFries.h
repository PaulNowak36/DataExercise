#ifndef FRENCHFRIESSTAND_H
#define FRENCHFRIESSTAND_H

#include <iostream>

using namespace std;

class frenchFriesStand {       
  public:             
    string name;        
    string city;  
    string owner_Name;

    int budget;
    int fries_Stock;
    int nb_Employees;

    frenchFriesStand(string x, string y, string z, int a, int b, int c) { // Constructor with parameters
      name = x;
      city = y;
      owner_Name = z;
      budget = a;
      fries_Stock = b;
      nb_Employees = c;
    }
};

#endif // FRENCHFRIESSTAND_H