#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");

    int from, to;

    cout << "введите начало диапазона: ";
    cin >> from;

    cout << "введите конец диапазона: ";
    cin >> to;

    int evenCount = 0;
    int oddCount = 0;

    string evenNumbers = "";
    string oddNumbers = "";

    for (int i = from; i <= to; i++) {
        if (i % 2 == 0) {
            evenCount++;

            if (!evenNumbers.empty()) {
                evenNumbers += ", ";
            }
            evenNumbers += to_string(i);
        }
        else {
            oddCount++;

            if (!oddNumbers.empty()) {
                oddNumbers += ", ";
            }
            oddNumbers += to_string(i);
        }
    }

    cout << "количество четных: " << evenCount << endl;
    cout << "четные числа: " << evenNumbers << endl;
    
    cout << "количество нечетных: " << oddCount << endl;
    cout << "нечетные числа: " << oddNumbers << endl;
    
    return 0;
}