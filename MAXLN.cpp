#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long int count=1;
    while(t--)
    {
        
        double r;
        cin>>r;
        double ans;
        ans = 0.25+4*r*r;     //max value of quadratic equation is -b/2a
        cout<<"Case "<<count<<": ";
        printf("%.2lf\n",ans);
        count++;
    }
    
    
    
    
return 0;    
}
