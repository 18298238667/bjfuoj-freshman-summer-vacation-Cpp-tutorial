#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int max_val=*max_element(a.begin()+i,a.begin()+j+1);
			int min_val=*min_element(a.begin()+i,a.begin()+j+1);
			long long product=(long long) max_val*min_val;
			if(product>ans){
				ans=product;
			}
		}
	}
	cout<<ans;
	return 0;
}
