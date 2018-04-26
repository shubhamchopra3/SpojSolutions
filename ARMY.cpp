#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
     int g,m;
     cin>>g>>m;
     int a[g],b[m];
     for(int i=0;i<g;i++)
     {
         cin>>a[i];
     }
     for(int j=0;j<m;j++)
     {
         cin>>b[j];
     }
     sort(a,a+g);
     sort(b,b+m);
     int max1=a[g-1];
     int max2=b[m-1];
     if(max1>=max2)
     {
         cout<<"Godzilla"<<endl;
     }
     else if(max2>max1)
     {
         cout<<"MechaGodzilla"<<endl;
     }
     
     
     
     
    }
    return 0;
}
    
