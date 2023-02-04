//
// Created by Sam Darkow on 2/4/23.
//

#include "iostream"

using namespace std;

int main(){

    int number, i, sum;

    do {
        cout << "Input a positive number: ";
        cin >> number;
    } while (number < 0);

    sum = 0;
    for (i = 0; i <= number; i++){
        sum += i;
        cout << i << endl;
    }

    cout << sum;
}