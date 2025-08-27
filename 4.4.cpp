#include <iostream>
using namespace std;

void Print(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<'*'<<i<<'='<<j*i<<' ';
		}
		cout<<'\n';
	}
}
int main(){
	int num;
	cin>>num;
	Print(num);
	return 0;
}
