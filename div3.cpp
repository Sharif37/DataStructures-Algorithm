//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
  int t;
  cin>>t ;
  while(t--)
  {
      int n ;
      cin>>n ;
      int arr[n] ;
      map<int,char>mch ;
      for(int i=0;i<n ;i++)
      {
          cin>>arr[i];

      }
      string s ;
      cin>>s ;

      for(int i=0;i<n ;i++)
      {

          mch[arr[i]]=s[i];
      }
      int ch=1 ;
      for(int i=0;i<n ;i++)
      {
         if(mch[arr[i]]!=s[i])
         {
             cout<<"NO"<<endl ;
             ch=0 ;
             break ;
         }
      }
      if(ch)
      cout<<"YES"<<endl ;



  }


}

