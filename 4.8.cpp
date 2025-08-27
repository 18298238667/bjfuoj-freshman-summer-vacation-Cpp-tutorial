#include <iostream>
#include <cstdlib>
using namespace std;
int Count_Digit ( int num, int d ){
	int n=abs(num);
	int count=0;
	while(n){
		if(n%10==d){
			count++;
		}
		n/=10;
	}
	return count;
}
int main(){
	int num,d;
	cin>>num>>d;
	cout<<Count_Digit(num,d);
	return 0;
}
