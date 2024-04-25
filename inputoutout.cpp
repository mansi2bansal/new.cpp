#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    cout<<"Enter the value of number1 :\n";/* '<<' this is called insertion operator used to display output*/
    cin>>number1; /* this is extraction operator to get the user input value to use it and compute*/

    cout<<" Enter  the value of number2 :\n";
    cin>>number2;

    cout<<"the sum of the two numbers is :"<< number1+number2;
    return 0;
}
