#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c;
    cout << "Введіть довжини трьох сторін трикутника: ";
    cin >> a >> b >> c;

    if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}

//222222222222222222222222/////////////////////////////////////////////////////

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;
    cout << "Введіть значення x, y: ";
    cin >> x;
    cin >> y;

    double result = (x * y) + ((x + pow(y, 2) + 3) / (pow(x, 2) + 5));

    cout << result;
}

//3333333333333333333333333/////////////////////////////////////////////////

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c;
    cout << "Введіть довжини трьох сторін трикутника: ";
    cin >> a >> b >> c;

    if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2)) {
        cout << "Трикутник прямокутний" << endl;
    }
    else {
        cout << "Трикутник непрямокутний" << endl;
    }
}

//44//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double points[4][2] = {
        {4.325, -1.813},
        {-0.9356, 1.385},
        {5.994, 1.877},
        {0.3757, 0.5993}
    };

    for (int i = 0; i < 4; i++) {
        double x = points[i][0];
        double y = points[i][1];
        bool inArea = false;

        if (((x * x) / 16 + (y * y) <= 1) ||
            (((x - 4) * (x - 4)) / 9 + (y * y) / 4 <= 1) ||
            (x >= -3 && x <= -2 && y >= -2 && y <= -1) ||
            (x >= -1 && x <= 0 && y >= -2 && y <= -1) ||
            (x >= 1 && x <= 2 && y >= -2 && y <= -1) ||
            (x >= 3 && x <= 4 && y >= -2 && y <= -1)) {
            inArea = true;
        }

        if (inArea) {
            double numerator = (y * y) - cos(x);
            double denominator = sqrt(5 - x);

            if (denominator <= 0) {
                cout << "YES: x= " << x << " y= " << y << " It is impossible to calculate u.\n";
            }
            else {
                double u = numerator / denominator;
                cout << "YES: x= " << x << " y= " << y << " u= " << u << "\n";
            }
        }
        else {
            double numerator = log10(sin(y + x) + 0.8);
            double denominator = sqrt(10 - cosh(x + 1));

            if (numerator <= 0 || denominator <= 0) {
                cout << "NO: x= " << x << " y= " << y << " It is impossible to calculate u.\n";
            }
            else {
                double u = numerator / denominator;
                cout << "NO: x= " << x << " y= " << y << " u= " << u << "\n";
            }
        }
    }

    return 0;
}

//55////////////////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double h;
    cout << "Введіть h: ";
    cin >> h;

    double a = sqrt(pow(sin(h), 2) * pow(tan(h), 3)) + 256;
    double b = 10 - sqrt(4 - 3 * tan(pow(sin(h), 2)));
    double c = cos(b * h) + b * h * pow(sin(a * h), 2);

    if (a < 0 || b < 0 || c < 0) {
        cout << "Неможливо обчислити коефіцієнти" << endl;
        return 0;
    }

    cout << "a = " << int(a * 10000) / 10000.0 << endl;
    cout << "b = " << int(b * 10000) / 10000.0 << endl;
    cout << "c = " << int(c * 10000) / 10000.0 << endl;

    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "Немає реальних коренів" << endl;
    }
    else {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "x1 = " << int(x1 * 10000) / 10000.0 << endl;
        cout << "x2 = " << int(x2 * 10000) / 10000.0 << endl;
    }

    return 0;
}

//66/////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c, d;
    cout << "Введіть значення a, b, c, d через пробіл: ";
    cin >> a >> b >> c >> d;

    const double pi = 3.141592653589793;

    double x = (a * abs(c - sin(log(cos(a * exp(-b) + c + d - 1))))) /
        (b * d * pow(cos(1.0 / (b * b)), 2) * log(pow(a, b) * pow(d, c) * pow(c, a)) * pi * pow(cos(a + b + c + d), pow(c, sin(a + b + c + d))));

    double y = pow(a, 1.0 / d) * pow(cos(a * b * c), 2) * sin(a * b * c);

    double z;
    if (sin(x * cos(y)) <= cos(y)) {
        z = pow((x * y) / (exp(x) + pi * y), 1.0 / (y * cos(log(x + x * cos(y)))));
    }
    else {
        z = (cos(log(3 + log(3) + log(3 * x))) + log(sin(y * log(x + pi)) + sin(pow(y, exp(x) + x * pi))));
    }

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z(x, y) = " << z << endl;

    return 0;
}

