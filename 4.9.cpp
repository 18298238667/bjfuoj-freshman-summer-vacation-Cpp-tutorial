#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double dist(int x1,int y1,int x2,int y2){
	double r=static_cast<double>(x2-x1)*(x2-x1)+static_cast<double>(y2-y1)*((y2-y1));
	double d=sqrt(abs(r));
	return d;
}
int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<"dist = ";
	cout<<fixed<<setprecision(2)<<dist(x1,y1,x2,y2);
	return 0;
}
