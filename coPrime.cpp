//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
  int t ;
  cin>>t ;
  while(t--)
  {
      int n,a ;
      cin>>n ;
      map<int ,int>m ;
      for(int i=1; i<=n ;i++){
        cin>>a;
        m[a]=i;
      }


        int ans=0 ;
       for(auto [k,v]:m)
       {
           for(auto [k1,v1]:m)
           {
               if(__gcd(k,k1)==1)
               {
                   ans=max(ans,v+v1);
               }
           }
       }



        if(ans==0)
        {
            cout<<-1<<endl ;
        }
        else
        cout<<ans<<endl ;

  }


}

