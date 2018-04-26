#include <bits/stdc++.h>
 using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
       long long int a,b,ans,e;
      char c,d;
      cin>>ans;
      cin>>c;
      cin>>a;
      while(1){
     
      switch(c)
      {
          case '+' : ans=ans+a;
          break;
          
          case '-' : ans=ans-a;
          break;
          
          case '*' : ans=a*ans;
          break;
          
          case '/' : ans=ans/a;
          break;
      }
    
      cin>>d;
      if(d =='='){
          cout<<ans<<endl;
      break;}
      else
      {
          c=d;
          cin>>e;
          a=e;
        
      }
     
       
       
      }  
       
    }
    
  
    return 0;
}
