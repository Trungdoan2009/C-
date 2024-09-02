#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long i =n;
    vector<int> x(n+1,0);
    while (i>0) {
    for (int i=1; i<=n; i++) cout<<x[i]<<" ";
    cout<<endl;
    i = n;
    while (i>0 && x[i]==1) i-=1;
    if (i>0)
    {
        x[i]=1;
        for (int j=i+1; j<=n; j++) x[j]=0;
    } 
    }
}