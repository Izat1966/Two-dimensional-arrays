/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
double determinant(double a, double b, double c, double d) {
    return a * d - b * c;
}
int main() {
    double a, b, c, d, e, f;
    cin >> a >> b >> e;
    cin >> c >> d >> f;
    double det = determinant(a, b, c, d);
    if (det == 0) {
        cout << "The system of equations does not have a unique solution." << endl;
        return 1;
    }
    double detX = determinant(e, b, f, d);
    double detY = determinant(a, e, c, f);

    double x = detX / det;
    double y = detY / det;
    cout << fixed << setprecision(3);
    cout << x << endl;
    cout << y << endl;
    return 0;
}

