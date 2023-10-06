#include <iostream>
using namespace std;
main ()
{
    int length,width,height;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
     cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    float volume=(length*width*height)/3;
   
    if (unit=="millimeters")
    {
        cout << "The volume of the pyramid is: " << volume*1000000000 << "cubic_" << unit;
    }
     else if (unit=="centimeters")
    {
        cout << "The volume of the pyramid is: " << volume*100 << "cubic_" << unit;
    }
     else if (unit=="meters")
    {
        cout << "The volume of the pyramid is: " << volume << "cubic_" << unit;
    }
    else if (unit=="kilometers")
    {
        cout << "The volume of the pyramid is: " << volume/1000 << " cubic_" << unit;
    }
    else {cout<< "invalid entery";}

}

