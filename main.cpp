#include <iostream>
#include <list>
#include "frenchFries.h"
#include "manageData.h"

using namespace std;

int main()
{
    frenchFriesStand momo("Friterie a momo", "Point-a-Pitre", "Momo Jr.", 20000, 500, 6);
    frenchFriesStand saqueudin("Peuchere", "Lille de quoi", "Francois le Breton", 30000, 750, 15);
    frenchFriesStand dubrin("Le golfe", "Berck !", "Eul postier", 1000, 30, 2);

    list<frenchFriesStand> fries = {momo, saqueudin, dubrin};

    cout << "PINGAS" << endl;
    
    presentFrenchStandsList(fries, 3);

}