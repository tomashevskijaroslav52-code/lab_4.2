#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dx;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-----------------------" << endl;
    cout << "|" << setw(8) << "x" << " |" << setw(10) << "y" << " |" << endl;
    cout << "-----------------------" << endl;

    double x = xp;
    while (x <= xk + dx / 2.0) {
        double A = pow(x, 3) + 2.0;
        double B;

        if (x < 4.0) {
            B = 5.0 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3.0;
        }
        else if (x < 7.0) {
            B = atan(fabs((x + 3.0) / 2.0)) + 7.0 * x;
        }
        else {
            B = log10(2.0 * x + exp(5.0 * x + 5.0));
        }

        double y = A + B;

        cout << "|" << setw(8) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y << " |" << endl;

        x += dx;
    }
    cout << "-----------------------" << endl;

    return 0;
}
