// Lumen Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>

using namespace std;


double calculateLumens(double watts, double efficiency) {
    return watts * efficiency;
}

int main() {
    double watts, efficiency;

 
    cout << "Enter the wattage of the light source (in watts): ";
    cin >> watts;

   
    cout << "Enter the efficiency of the light source (in lumens per watt): ";
    cin >> efficiency;

   
    double lumens = calculateLumens(watts, efficiency);

    cout << "The total lumens produced by the light source is: " << lumens << " lumens" << endl;

    return 0;
}



