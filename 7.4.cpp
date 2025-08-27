#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int arr[10]={0};
	for(int i=0;i<n;i++){
		arr[v.at(i)]++;
	}
	bool isave=true;
	for(int i=0;i<10;i++){
		if(arr[i]){
			if(arr[i]%m!=0){
				isave=false;
				break;
			}
		}
	}
	if(isave){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
