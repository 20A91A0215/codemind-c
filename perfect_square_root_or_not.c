#include<iostream>
using namespace std;
int main()
{
    int n,i=1,c=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if((i*i)==n)
        {
            cout<<"True"<<endl;
            c++;
            break;
        }
    }
    if(c==0)
    {
    cout<<"False"<<endl;
    }
}