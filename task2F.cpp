#include <iostream>
using namespace std;
float volume(int length, int width, int height, string unit);
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

    cout<< "The volume of the pyramid is: " << volume(length,width,height,unit)<< "cubic"<< unit <<endl;
   

}
float volume(int length, int width, int height, string unit)
{
   float volume=(length*width*height)/3;
   
    if (unit=="millimeters")
    {
       return volume*1000000000;
    }
     else if (unit=="centimeters")
    {
        return volume*100;
    }
     else if (unit=="meters")
    {
        return volume;
    }
    else if (unit=="kilometers")
    {
        return volume/1000;
    }
    return 0;
}


