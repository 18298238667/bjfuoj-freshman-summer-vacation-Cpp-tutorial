#include <iostream>
using namespace std;
int getgcd(int a,int b){
	int t=a%b;
	while(t){
		a=b;
		b=t;
		t=a%b;
	}
	return b;
}
int main(){
	int a,b,r;
	cin>>a>>b;
	r=getgcd(a,b);
	cout<<r;
	return 0;
}
