#include<iostream>
using namespace std;
int main()
{
    int n,se=0,so=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            se=se+a[i];
        }
        else
        {
            so=so+a[i];
        }
    }
    cout<<abs(se-so);
    
}