#include <boost/multiprecision/cpp_int.hpp>
#include<bits/stdc++.h>
namespace mp = boost::multiprecision;
using namespace std;


int main()

{
    
    mp::cpp_int n ;
   
     while(cin>>n) 
     {
          mp::cpp_int ans=0 ;
         if(n==1)
     {
         cout<<1<<endl;
     }
     else{
         ans=n+(n-2);
         cout<<ans<<endl;
     }
     }
    
return 0;
}
