#include<iostream>
using namespace std;

void magical_park(char a[][100],int m,int n,int k,int s)
{
    bool success = true;
    int i,j;
    char ch;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            ch=a[i][j];
            if(s<k)
            {
                success=false;
                break;
            }
            else if(ch=='.')
                s-=2;
            else if(ch=='*')
                s+=5;
            else
                break;
            if(j!=(m-1))
                s--;
        }
    }
    if(success)
    {
        cout<<"Yes"<<endl<<s;
    }
    else
        cout<<"No";
}

int main()
{
    int m,n,k,s,i,j;
    cin>>m>>n>>k>>s;
    char park[100][100];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>park[i][j];
        }
    }
    magical_park(park,m,n,k,s);
}