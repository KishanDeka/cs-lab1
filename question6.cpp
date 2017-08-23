#include <iostream>
using namespace std;

int main()
{
    	float r;
    	const double PI= 3.14159265358979323846;
	cout <<"enter the radious of circle"<<endl;
	cin >> r;
	cout << "radius = "<< r<<endl;
             if ( r>=0)  {
             	cout << "diameter =" << 2*r <<endl;
	cout << "circumference ="<< 2*PI*r <<endl;
	cout << "area =" << PI*r*r;}
            else { cout << "radius is invalide";}
	

    return 0;
}
