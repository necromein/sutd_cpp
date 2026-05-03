#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");

    double a, b, c, p, S;

    cout << "введите a, b, c: ";
    cin >> a >> b >> c;

    p = (a + b + c) / 2;

    S = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "площадь: " << S;

    return 0;
}