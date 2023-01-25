//
// Created by Sam Darkow on 1/24/23.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string month1, month2, month3;
    int amount1, amount2, amount3;
    double AverageRainfall;

    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Enter the first months rainfall in inches: ";
    cin >> amount1;

    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter the second months rainfall in inches: ";
    cin >> amount2;

    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Enter the third months rainfall in inches: ";
    cin >> amount3;

    AverageRainfall = (amount1 + amount2 + amount3) / 3.0;

    cout << "The average rainfall for "<< month1 <<", " << month2 <<", and ";
    cout << month3 <<" is " << AverageRainfall << " inches.";
}