#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i=1;
	
	while(i<=n){		
		int k=1;
		while(k<=n-i){
			cout<<" ";
			k=k+1;
		}
		int j=1;
		int p=i;
		while(j<=i){
			cout<<p;
			j=j+1;
			p=p+1;
		}
		j=i-1;
		int g=2*(i-1);
		while(j>=1){
			cout<<g;
			g--;
			j--;
		}
		cout<<endl;
		i=i+1;
	}
}
