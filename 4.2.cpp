#include <iostream>
using namespace std;

int fact(int num){
	if(num==0){
		return 1;
	}
	else{
		return fact(num-1)*num;
	}
}
int main(){
	int n;
	cin>>n;
	int result=fact(n);
	cout<<n<<"! = "<<result;
	return 0;
}
