#include<iostream>
#include<cmath>

using namespace std;
int main(){
	
	int n,r;
	int se=0;
	int sd=0;
	cin>>n;
	
	while(n>0){
		r=n%10;
		if(r%2==0){
			se=se+r;
		}else{
			sd=sd+r;
		}
		 n=n/10;
	}
	
	cout<<se<<" "<<sd;	
	
}
