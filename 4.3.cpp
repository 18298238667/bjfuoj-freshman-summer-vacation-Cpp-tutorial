#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void root(int a,int b,int c){
	const double eps=1e-9;
	double delta=static_cast<double>(b)*b-4*static_cast<double>(a)*c;
	if(delta>eps){
		double x1=(-b+sqrt(delta))/(2.0*a);
		double x2=(-b-sqrt(delta))/(2.0*a);
		if(x1<x2) swap(x1,x2);
		cout<<"Two real roots:";
		cout<<fixed<<setprecision(4)<<x1<<','<<x2;
	}
	else if(abs(delta)<eps){
		double x=-b/(2.0*a);
		cout<<"One real root:";
		cout<<fixed<<setprecision(4)<<x;
	}
	else{
		cout<<"No real root";
	}
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	root(a,b,c);
	return 0;
}
