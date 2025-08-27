#include <iostream>
#include <iomanip>
using namespace std;
int fib(int n){
	if(n==1 || n==2){
		return 1;
	}
	return fib(n-2)+fib(n-1);
}
int main(){
	int n;
	cin>>n;
	double fn=fib(n);
	cout<<fixed<<setprecision(2)<<fn;
	return 0;
}
