#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 1;
	
	while(i<=n){
		int j = 1;
		char sch ='A'+n-i-2;
		while(j<=i){
		char ch =sch+j+1;
		cout<<ch;
		j++;
	}
		cout<<endl;
		i++;
	}

}
