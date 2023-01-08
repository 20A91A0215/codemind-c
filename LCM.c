#include<iostream>
using namespace std;
int  read(int n,int m)
    {
        for(int i=1;i<10000;i++)
        {
            if(i%n==0&&i%m==0)
           {
               return i;
           }
        }
    }
int main()
{
    int n,m,l;
    cin>>n>>m;
    l=read(n,m);
    cout<<l;
}