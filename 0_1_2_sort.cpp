//0 1 2 sorting question
#include<bits/stdc++.h>
using namespace std;
int sort(int a[],int n)
{
    int l,m,h;
    l=m=0; h=n-1;
    while(m<=h){
        if(a[m]==0)
        {swap(a[m],a[l]);
        m++;l++;}
        else if(a[m]==1)
        m++;
     else
        {
            swap(a[m],a[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i];
    return 0;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,n);
    return 0;
}