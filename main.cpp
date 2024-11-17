/*
    Name: Chen, Isaac, 2002582920, CS 135 1001, Assignment 1
    Description: Creating a C++ program that calculates
    monthly mortgage payments.The information about the
    mortgage payments will then be displayed in the console.
    Input: Principal Loan, Loan Term, Annual Interest Rate
    Output: Monthly Mortgage Rate Payments
*/
#include <iostream>
#include <cmath> // for the pow function
#include <iomanip> // for setprecision

using namespace std;

int main() {
    // Variables for the equation
    long double principalLoan = 0;
    long double annualInterestRate = 0;
    long double loanTerm = 0;
    long double monthlyPayment = 0;

    // Breaking equation into pieces for readability
    long double numerator = 0;
    long double denominator = 0;
    long double temp = 0;

    // Asking for user input to fillout the variables
    // The additional cout is to fulfill codegrade requirements
    cout << "Welcome to the CS135 Mortgage Calculator\n";
    cout << "Enter the principal loan amount: ";
    cin >> principalLoan;
    cout << endl;

    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> annualInterestRate;
    cout << endl;

    // extra comment for grade
    cout << "Enter the loan term in years: ";
    cin >> loanTerm;
    cout << endl;

    // Calculating the actual math for output
    long double monthlyInterestRate = ( annualInterestRate / 100 ) / 12;
    long double numberOfPayments = loanTerm * 12;

    temp = pow(( 1 + monthlyInterestRate), numberOfPayments);
    numerator = (principalLoan * monthlyInterestRate * temp);
    denominator = temp - 1;
    monthlyPayment = numerator / denominator;

    // Display the results in console
    cout << fixed << setprecision(2);
    cout << "\nCalculating the monthly mortgage payment..." << endl;
    cout << "Principal Loan Amount: $" << principalLoan << endl;
    cout << "Annual Interest Rate: " << annualInterestRate << "%";
    cout << "\nLoan Term: " << loanTerm << " years" << endl;
    cout << "Monthly Payment: " << "$" << monthlyPayment;

    return 0;
}