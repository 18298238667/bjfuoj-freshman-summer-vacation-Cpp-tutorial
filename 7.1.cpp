#include <iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int count=0;
	for(int i=1;i<=n;i++){
		int num=i;
		while(num){
			int digit=num%10;
			if(digit==x){
				count++;
			}
			num/=10;
		}
	}
	cout<<count;
	return 0;
}
