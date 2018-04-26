#include <bits/stdc++.h>
using namespace std;
int main()
{

while(1){
    float a;
    
        cin>>a;
        if(a==0.00)
       {
             break;
        }
        float n=2,count=0,sum=0;
        
        while(sum<=a)
        {
            sum=sum+1/n;
            n++;
            count++;
           
        }
        cout<<count<<" card(s)"<<endl;
    }
    
    
    return 0;
}


