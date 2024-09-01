#include <iostream>
using namespace std;

int main() {
    // Define the quantities and costs of the items
    int numNotebooks = 15;
    int numPens = 20;
    float costNotebook = 2.25;
    float costPen = 0.75;

    // Calculate the total cost
    float totalCost = (numNotebooks * costNotebook) + (numPens * costPen);

    // Display the result
    cout << "The total cost of the supplies is Rs. " << totalCost << endl;

    return 0;
}