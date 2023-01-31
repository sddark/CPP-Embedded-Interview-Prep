//
// Created by Sam Darkow on 1/30/23.
//
#include "iostream"
using namespace std;

int main(){
    double length;
    cout << "Input the wavelength of an electromagnetic wave:";
    cin >> length;
    if (length > 1E-2){
        cout << "This is a radio wave";
    }
    else if (length > 1E-3){
        cout << "This is a microwave";
    }
    else if (length > 7E-7){
        cout << "This is an infared wave";
    }
    else if (length > 4E-7){
        cout << "This is a visible light wave";
    }
    else if (length > 1E-8){
        cout << "This is an ultraviolet wave";
    }
    else if (length > 1E-11){
        cout << "This is an X ray wave";
    }
    else{
        cout << "This is a Gamma ray wave";
    }
}