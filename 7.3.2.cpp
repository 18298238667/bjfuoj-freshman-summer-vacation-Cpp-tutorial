#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int temp=n;
	int digits=0,count=0;
	long long repunit=0;
	while(temp){
		digits++;
		temp/=10;
	}
	for(int i=1;i<=digits;i++){
		repunit=10*repunit+1;
		for(int j=1;j<=9;j++){
			long long num=j*repunit;
			if(num<=n){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
