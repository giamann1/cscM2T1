// M2T1
// Reciept Calculator
// Gia Manning
// 2-11-2024

#include <iostream>
using namespace std;

int main (){
    // This program stimulates a simple
    // restaurant receipt Calculator 

    // declare our variables
    double mealPrice = 5.99;
    double taxRate = 0.08; // 8% = 8/100
    double taxAmount; // $ of tax due
    double total;     // mealPrice + taxAmount

    // calculate the tax amount and the total 
    taxAmount = taxRate * mealPrice; // 8% of 5.99
    total = mealPrice + taxAmount;

    // print output
    cout << "Thank you for dining with us." << endl;
    cout << "Your meal total is $" << mealPrice << endl;
    cout << "The tax is $" << taxAmount << endl;
    cout << "Your total is $" << total << endl;
    cout << "Please come again." << endl;
}