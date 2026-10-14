#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_CAPACITY = 100;

int main() {

    string itemNames[MAX_CAPACITY] = {"Laptop Pro", "Wireless Mouse", "Mechanical Keyboard"};
    int itemQuantities[MAX_CAPACITY] = {45, 120, 80};
    double itemPrices[MAX_CAPACITY] = {1200.00, 25.50, 89.99};
    int currentItemCount = 3;

    cout << "   INVENTORY MANAGEMENT SYSTEM (IMS)  \n";



    cout << left << setw(5) << "ID" << setw(25) << "Item Name" << setw(10) << "Stock" << setw(12) << "Price" << "\n";
    for(int i = 0; i < currentItemCount; ++i) {
        cout << left << setw(5) << i
             << setw(25) << itemNames[i]
             << setw(10) << itemQuantities[i]
             << fixed << setprecision(2) << "$" << itemPrices[i] << "\n";
    }


    int lookupId = 1;
    cout << "\n[O(1) Direct Lookup] Querying Item ID " << lookupId << "...\n";
    if(lookupId >= 0 && lookupId < currentItemCount) {
        cout << "Result Match: " << itemNames[lookupId] << " | Stock: " << itemQuantities[lookupId] << "\n";
    }


    double totalValuation = 0.0;
    for(int i = 0; i < currentItemCount; ++i) {
        totalValuation += itemQuantities[i] * itemPrices[i];
    }
    cout << "\nTotal Stock Asset Valuation: $" << totalValuation << "\n";


    return 0;
}
