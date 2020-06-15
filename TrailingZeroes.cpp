#include<iostream>
using namespace std;

int TrailingZeroes(int number)
{
    int ans=0;
    int div=5;
    while(number/div>0)
    {
        ans += (number/div);
        div *= 5;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter value of n=";
    cin>>n;

    cout<<"Number of trailing zeroes="<<TrailingZeroes(n);
}