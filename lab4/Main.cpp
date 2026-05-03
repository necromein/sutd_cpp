#include <iostream>
#include <fstream>
#include <string>
#include "labs.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");

    ofstream clearfile("lab4.txt");
    clearfile.close();

    lab1();
    lab2();
    lab3();

    ifstream fin("lab4.txt");

    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}