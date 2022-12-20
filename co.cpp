//Bismillah
#include<bits/stdc++.h>
using namespace std ;
bool is_prime(int n)
{
    for(int i=2;i*i<=n ;i++)
    {

        if(n%i==0)
            return false ;
    }
        return true ;
}
bool is_divisiable(int n,int k)
{
    if(n%k==0)
        return false ;
    else
        return true ;
}
int main()
{
  int t;
  cin>>t ;
  while(t--)
  {
      int n ;
      cin>>n ;
      int arr[n];
      for(int i=0;i<n ;i++)
        cin>>arr[i] ;
        int a=0 ;
      for(int i=n ;i>=0 ;i--)
      {
          if(is_prime(arr[i-1]))
          {
              a=i ;
             // cout<<arr[i-1]<<" "<<a<<endl ;
              break ;
          }

      }
      int k=0 ;
       for(int i=n ;i>=0 ;i--)
       {
          if(is_divisiable(arr[i-1],arr[a-1]))
          {
              k=i ;
              break ;
          }
       }
       if(arr[a-1]==1 && a==n)
       {
           cout<<2*a<<endl ;
       }
       else if(k==0 || n==1)
       {
           cout<<-1<<endl ;
       }
       else
       cout<<k+a<<endl ;


  }

}

