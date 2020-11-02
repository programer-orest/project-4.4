#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, R, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |";
    cout << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {

        if (x <= -R)
            y = R;
            
        else
            if (-R < x && x <= R)
                y = -sqrt(R * R - x * x) - R;
            else
                if (R < x && x <= 6)
                    y = R + (-3 - R) * (x - 3) / (6 - R);
                    else
                    y = x - 9;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    system("pause");
    return 0;
}