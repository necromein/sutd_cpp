#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double amount, percent;
    int years;

    cout << "введите сумму кредита: ";
    cin >> amount;

    cout << "введите срок (в годах): ";
    cin >> years;

    cout << "введите процент: ";
    cin >> percent;

    double percentPerMonth = percent / 100.0 / 12.0;
    int months = years * 12;

    double monthPayment = amount * percentPerMonth /
        (1 - pow(1 + percentPerMonth, -months));

    double fullAmount = monthPayment * months;
    double overpayment = fullAmount - amount;

    cout << "\nежемес€чный платеж: " << monthPayment << endl;
    cout << "итогова€ сумма: " << fullAmount << endl;
    cout << "переплата: " << overpayment << endl;

    return 0;
}