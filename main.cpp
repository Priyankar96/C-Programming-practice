#include<iostream>
using namespace std;
int main(){
    int p;
    int s,e,w;
    
    cin>>s>>e>>w;
    
    while(s<=e){
        p=(5*(s-32)/9);
        cout<<s<<"\t"<<p<<endl;
         s=s+w;
    }
}