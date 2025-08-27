#include <iostream>
using namespace std;
int main(){
	int num,a,b;
	cin>>num;
	a=num/10;
	b=num%10;
	if((a+b)%2==1){
		cout<<'+';
	}
	else{
		cout<<'-';
	}
	return 0;
}
