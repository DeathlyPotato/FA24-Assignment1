// Write your header comment

#include <iostream>
#include <cmath> // for the pow function
#include <iomanip> // for setprecision

using namespace std;

int main() {
    // Declare variables of type double for:
    // 1. principal loan amount
    // 2. annual interest rate
    // 3. loan term
    // 4. monthly payment
    // 5. number of payments
    // 6. montly interest rate

    // Validate the input entered by the user (look at the sample out for reference)

    // HINT: Convert the annual interest rate to montly interest rate (as decimal)
    //       montly interest rate = anual interest rate divided by 100 then divided by 12

    // HINT: Calcualte the number of payments (months)
    //       number of payments = loan term multiplied by 12

    // HINT: You can use 'pow' as follows:
    //       pow(2, 3) which means 2 to the power of 3

    // Display the results
    cout << fixed << setprecision(2); // I've added this for the monetary values
    // Write your 'cout' statements here
    return 0;
}