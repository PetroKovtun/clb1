 #include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const double a = 18.5;
    double x, b, e = 2.74;
    cout << "enter x ";
    cin >> x;
    cout << "enter b ";
    cin >> b;
    if (x > 1 && x < 2) {
        cout << a * pow(x, 2) * log(x);
    } else if (x < 1) {
        cout << 1;
    } else {
        cout << pow(e, a * x) * cos (b * x);
    }

    return 0;
}

