#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j,p,k;
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			cout<<j;
		}
		for(p=i;p<n;p++){
			cout<< "**";
		}
		for(k=i;k>=1;k--){
			cout<<k;
		}
		cout<<endl;
	}
}
