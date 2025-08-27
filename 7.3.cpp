#include <iostream>
using namespace std;
bool perfect_num(int num){
	bool val=true;
	while(num>9){
		if((num/10%10)!=(num%10)){
			val=false;
			break;
		}
		num/=10;
	}
	return val;
}
int main(){
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++){
		if(perfect_num(i)){
			count++;
		}
	}
	cout<<count;
	return 0;
}//Ê±¼ä¸´ÔÓ¶Ènlogn 
