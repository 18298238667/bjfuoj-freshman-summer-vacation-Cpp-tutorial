#include <iostream>
using namespace std;
int isprime(int year){
	if(year%400==0||(year%4==0&&year%100!=0)){
		return 1;
	}
	return 0;
}
int main(){
	int x,y,count=0;
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(isprime(i)){
			count++;
		}
	}
	cout<<count<<'\n';
	for(int i=x;i<=y;i++){
		if(isprime(i)){
			cout<<i<<' ';
		}
	}
	return 0;
} 
