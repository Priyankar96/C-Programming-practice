//total salary calculation

#include<iostream>
#include<cmath>
using namespace std;

int main (){
	
	double allow,basic;
	double hra,da,pf;
    char grade;
	cin>>basic>>grade;
	
	hra=0.2*basic;
	da =0.5*basic;
	pf =0.11*basic;
	
	if (grade=='A'){
		allow=1700;
	}else if(grade=='B'){
		allow=1500;
	}else{
		allow=1300;
	}
	
	double ts;
	ts=(basic+hra+da+allow-pf);
    int final;
    final=lround(ts);
	cout<<final<<endl;
	
}
