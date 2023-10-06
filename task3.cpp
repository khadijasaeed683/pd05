#include <iostream>
using namespace std;
float taxCalculatar(char code, int price);
main ()
{
    char code;
    float price, finalPrice;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> code;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    cout << "The final price of a vehicle of type "<< code << " after the tax is $" << taxCalculatar(code, price);

}
float taxCalculatar(char code, int price)
{
    float taxRate;
    if (code=='M') 
    {
        taxRate=0.06;
    }
    else if (code=='E')
     {
        taxRate=0.08;
    }
     else if (code=='S')
     {
        taxRate=0.1;
    }
     else if (code=='V')
     {
        taxRate=0.12;
    }
     else if (code=='T')
     {
        taxRate=0.15;
    }
    float finalPrice= (price*taxRate)+price;
    return finalPrice;
}