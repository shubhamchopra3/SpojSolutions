#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(!isdigit(s[i]))   /isdigit function
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
      string s1,s2,s3,s4,s5;
      cin>>s1>>s2>>s3>>s4>>s5;
      int a,b,c;
      if(!check(s1))
      {
          a=stoi(s3);
          b=stoi(s5);       //convert string to int function
          c=b-a;
          cout<<c<<" + "<<a<<" = "<<b<<endl;
          
      }
      else if(!check(s3))
      {
           a=stoi(s1);
           b=stoi(s5);
            c=b-a;
              cout<<a<<" + "<<c<<" = "<<b<<endl;
      }
      else if(!check(s5))
      {
          a=stoi(s1);
          b=stoi(s3);
          c=a+b;
           cout<<a<<" + "<<b<<" = "<<c<<endl;
      }
  }
  return 0;
}
