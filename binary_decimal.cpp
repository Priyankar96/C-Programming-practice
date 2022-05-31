#include<iostream>
using namespace std;
int main()
{
    int binnum, decnum=0, i=1, rem;
    cin>>binnum;
    while(binnum!=0)
    {
        rem = binnum%10;
        decnum = decnum + (rem*i);
        i = i*2;
        binnum = binnum/10;
    }
    cout<<decnum<<endl;
    return 0;
}
