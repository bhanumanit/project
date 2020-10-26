//Kadane's algorithm
//largest contigous subarray
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum<a[i])
        sum=a[i];
        if(max<sum)
        max=sum;
        }
        return max;
    
}
