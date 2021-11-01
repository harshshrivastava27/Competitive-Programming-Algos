#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool check[100];
    for (int i = 0; i < n; i++)
    {
        check[i]=false;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            check[a[i]]=true;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if(check[i]==false)
        {
            cout<<i;
            break;
        }
    }
}