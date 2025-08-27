#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi=3.1416;
int main(){
	double a=3.5,b=4.72,angle=37.0;
	double rad=angle*pi/180;
	double area=a*b*sin(rad)/2.0;
	cout<<fixed<<setprecision(4)<<area;
	return 0;
}
