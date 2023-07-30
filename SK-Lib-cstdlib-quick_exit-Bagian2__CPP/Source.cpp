#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void function1() {
    cout << "Exit Function 1" << endl;
}

void function2() {
    cout << "Exit Function 2" << endl;
}

int main() {
    at_quick_exit(function1);
    at_quick_exit(function2);

    quick_exit(0);

    _getch();
    return 0;
}