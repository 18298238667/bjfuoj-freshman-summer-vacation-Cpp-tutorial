#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	auto result =minmax_element(arr,arr+n);
	cout<<*(result.second)<<' '<<*(result.first);
	delete[] arr;
	return 0;
}
