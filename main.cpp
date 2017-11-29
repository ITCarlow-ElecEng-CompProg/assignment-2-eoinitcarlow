/*Eoin Finlay
  Ex2-Factorial Calculator
  20 Sep 2017 */

//Preprocessor Directives
#include <iostream>

using namespace std;

//Main Function
int main()
{
    //Variable Declarations
    int n, x;
    double fact1, fact2;

    //Initialising variables
    fact1 = 1;
    fact2 = 1;
    n = 0;

    //Loop to ensure value entered is greater than zero
    while (n<=0)
        {
         //Prompt user to enter value greater than zero
         cout <<"Enter a value greater than zero: ";
         //Storing input value as n
         cin >> n;
        }

    cout <<"\n\n" <<endl;
    //For Loop to calculate factorial
    for (x=n; x>0; x--)
        {
        //Assigning fact1 to an equation
        fact1 = fact1 * x;
        }
    //Displaying result of first loop to user
    cout <<"Factorial For Loop: "<<fact1<<endl;

    cout <<"\n\n" <<endl;
    //While Loop to calculate factorial
    while (n>0)
        {
        //Assigning fact2 to an equation
        fact2 = fact2 * n;
        n--;
        }
    //Displaying result of second loop to user
    cout <<"Factorial While Loop: "<<fact2<<endl;


    return 0;
}
