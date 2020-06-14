#include<iostream>
using namespace std;

int main()
{
    int n,i,rows;
    cout<<"Enter value of n=";
    cin>>n;

    cout<<"*";
    for(i=1;i<=(n-3)/2;i++)
        cout<<" ";
    for(i=1;i<=(n+1)/2;i++)
        cout<<"*";
    cout<<endl;

    for(rows=1;rows<=(n-3)/2;rows++)
    {
        cout<<"*";
        for(i=1;i<=(n-3)/2;i++)
            cout<<" ";
        cout<<"*"<<endl;
    }

    for(i=1;i<=n;i++)
        cout<<"*";
    cout<<endl;

    for(rows=1;rows<=(n-3)/2;rows++)
    {
        for(i=1;i<=(n-3)/2+1;i++)
            cout<<" ";
        cout<<"*";
        for(i=1;i<=(n-3)/2;i++)
            cout<<" ";
        cout<<"*"<<endl;
    }

    for(i=1;i<=(n+1)/2;i++)
        cout<<"*";
    for(i=1;i<=(n-3)/2;i++)
        cout<<" ";
    cout<<"*";
}