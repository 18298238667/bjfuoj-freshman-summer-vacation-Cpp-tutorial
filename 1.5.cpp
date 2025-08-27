#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float x,y;
	cin>>x>>y;
	cout<<fixed<<setprecision(6)<<(float)x*y;
	return 0;
}
