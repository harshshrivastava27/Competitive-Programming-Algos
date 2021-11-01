#include<iostream>
using namespace std;
int main()
{
    int n,maxele=0,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       maxele=max(maxele,a[i]);
    }
    cout<<maxele;
    
}