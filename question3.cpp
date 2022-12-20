//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n ;

char arr[n+1][n+1];
  for(int i=1 ;i<=n ;i++)
  {
      for(int j=1 ;j<=n ;j++)
      {

          if(i==j)
          {
              arr[i][j]='#';
          }
        else if(j==1 || j==n)
          {
              arr[i][j]='#';
          }
        else  if(i+j==(n+1))
          {
              arr[i][j]='#';
          }
          else
          {
              arr[i][j]='*';
          }


      }
  }
  for(int i=1 ;i<=n ;i++)

  {
      for(int j=1 ;j<=n ;j++)
      {
         cout<<arr[i][j]<<" " ;
      }
      cout<<endl ;
  }



}

