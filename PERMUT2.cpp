#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n;
    
    while(1)
    {
         int flag=1;
         cin>>n;
        if(n==0)
        {
            break;
        }
      long long int a[n];
      long long int b[n]={0};
      for(long long int i=1;i<=n;i++)
      {
          cin>>a[i];
      }
      for(long long int j=1;j<=n;j++)
      {
          b[a[j]]=j;
      }
      for(int k=1;k<=n;k++)
      {
         if(b[k]!=a[k])
         {
             flag=0;
             break;
         }
      }
       if(flag==1)
       {
           cout<<"ambiguous"<<endl;
       }
       else
       {
           cout<<"not ambiguous"<<endl;
       }
      
      
       
        
        
        
       
    }  // end of while loop
    

    return 0;
}
