//transform array a[i] to a[a[i]] in o(1) space
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //transform a[i] to a[i]+(a[a[i]]%n)*n
   for(int i=0;i<n;i++){
       a[i]+=(a[a[i]]%n)*n;
   }
   for(int i=0;i<n;i++){
   a[i]/=n;
   cout<<a[i];
   }
    return 0;
}
