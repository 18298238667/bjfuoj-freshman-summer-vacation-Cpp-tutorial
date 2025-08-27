#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	if(num>0){
		cout<<'+';
	}
	else if(num==0){
		cout<<'0';
	}
	else{
		cout<<'-';
	}
	return 0;
}
