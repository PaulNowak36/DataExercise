#include <iostream>
#include "frenchFries.cpp"

using namespace std;

int main()
{
    frenchFriesStand biloute("Friterie a momo", "Point-a-Pitre", "Momo Jr.", 20000, 500, 6);

    cout << "PINGAS" << endl;
    cout << "My fav french stand is: " << biloute.name << endl;
    cout << "Its location is in: " << biloute.city << endl;
    cout << "The owner name is: " << biloute.owner_Name << endl;
    cout << "It has a budget of : " << biloute.budget << " euros" << endl;
    cout << "It has a fries stock of : " << biloute.fries_Stock << " kilos." << endl;
    cout << "Its number of employees is : " << biloute.nb_Employees << endl;




}