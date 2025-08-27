#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
	int n,size;
	cin>>n;
	size=sqrt(n);
	vector<vector<int>> matrix(size,vector<int>(size,0));
	int num=1;
	int left=0,right=size-1,bottom=size-1,top=0;
	while(num<=n){
		for(int i=left;i<=right&&num<=n;i++){
			matrix[top][i]=num++;
		}
		top++;
		for(int i=top;i<=bottom&&num<=n;i++){
			matrix[i][right]=num++;
		}
		right--;
		for(int i=right;i>=left&&num<=n;i--){
			matrix[bottom][i]=num++;
		}
		bottom--;
		for(int i=bottom;i>=top&&num<=n;i--){
			matrix[i][left]=num++;
		}
		left++;
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<matrix[i][j];
			if(j<size-1){
				cout<<' ';
			}
		}
		cout<<'\n';
	}
	
	return 0;
}
