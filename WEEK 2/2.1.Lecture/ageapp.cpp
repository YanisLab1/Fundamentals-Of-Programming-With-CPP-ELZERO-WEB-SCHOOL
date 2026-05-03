#include <iostream>

using namespace std;

int main()
{
    cout << "====================================\n";
    cout << "== Calculate Your Age Application ==\n";
    cout << "====================================\n";

    int age;

    cin >> age;

    int age_in_days = age * 365;

    int age_in_hours = age_in_days * 24;

    cout << "Your Age In Days Is : " << age_in_days;
    cout << "\nYour Age In Hours Is : " << age_in_hours;

    return 0;
}