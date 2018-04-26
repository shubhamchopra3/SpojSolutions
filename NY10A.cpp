#include<bits/stdc++.h>
using namespace std;
int check(string s,string str)
{
    int count=0;
    int len = str.length();
    for(int i=0;i<=len-3;i++)
    {
        string s2=str.substr(i,3);
        if(s2==s)
        {
            count++;
        }
    }
    return count;
}


int main()
{
    long long int t;
    cin>>t;
   int ans;
    while(t--)
    {
        string str;
        int setno;
        cin>>setno;
        cin>>str;
        string s[8]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
        int b[8];
        for(int i=0;i<8;i++)
        {
            int count=0;
            count=check(s[i],str);
            
            b[i]=count;
            
        }
        cout<<setno<<" ";
        for(int j=0;j<8;j++)
        {
            cout<<b[j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
return 0;    
}
