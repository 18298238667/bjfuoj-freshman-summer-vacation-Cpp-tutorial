#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<i*m+j+1;
			if(j!=m-1){
				cout<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
