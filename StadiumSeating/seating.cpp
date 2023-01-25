//
// Created by Sam Darkow on 1/24/23.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int ASeatPrice = 15;
    int BSeatPrice = 12;
    int CSeatPrice = 9;
    int ASeatsSold, BSeatsSold, CSeatsSold;
    float TotalIncome;


    cout << "how many A seats were sold? ";
    cin >> ASeatsSold;
    cout << "how many B seats were sold? ";
    cin >> BSeatsSold;
    cout << "how many C seats were sold? ";
    cin >> CSeatsSold;

    TotalIncome = ASeatsSold * ASeatPrice + BSeatsSold * BSeatPrice + CSeatsSold * CSeatPrice;

    cout << "Total Income: $" << showpoint << setprecision(2) << TotalIncome;


}