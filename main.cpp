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
    list<frenchFriesStand> noFries;


    cout << "PINGAS" << endl;
    /* presentFrenchStandsList(fries, fries.size()); */
    /* addFrenchStand(fries, "Barack", "St Pol", "Polo", 3500, 234, 4); */

    getFrenchStand(fries, 2);

    cout << "NOW CHANGE" << endl;
    cout << endl;

    /* removeFrenchStand(fries, 1); */

    updateFrenchStandName(fries, 2, "Momo JR");
    updateFrenchStandCity(fries, 2, "Francfort");
    updateFrenchStandOwner(fries, 2, "Momo Junior JR");
    updateFrenchStandBudget(fries, 2, 1400);
    updateFrenchStandStock(fries, 2, 99);
    updateFrenchStandStaff(fries, 2, 5);

    getFrenchStand(fries, 2);

    /* presentFrenchStandsList(fries, fries.size()); */

}