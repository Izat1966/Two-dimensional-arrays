/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int ticketPrices[rows][cols];
    int soldTickets[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> ticketPrices[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> soldTickets[i][j];
        }
    }
    int totalRevenue = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (soldTickets[i][j] == 1) {
                totalRevenue += ticketPrices[i][j];
            }
        }
    }
    cout << totalRevenue;
    return 0;
}



