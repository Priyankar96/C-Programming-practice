#include<iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int strt=0;
    int end=n-1;
    while(strt<=end){
        int mid=(strt+end)/2;
        if(input[mid]==val){
            return mid;
        }else if(input[mid]>val){
             end=mid-1;
            
        }else{
           strt=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<=n;i++)
    {
        cin>>input[i];
    }
    int val;
    cin>>val;
    cout<<binarySearch(input,n,val)<<endl;
}