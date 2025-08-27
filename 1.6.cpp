#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float c,f;
	f=64.00;
	c=5.0/9.0*(f-32.00);
	cout<<fixed<<setprecision(6)<<c;
	return 0;
}
