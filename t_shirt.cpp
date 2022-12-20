//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
  int t ;
  cin>>t ;
  while(t--)
  {
     string s1,s2 ;
     cin>>s1>>s2 ;
     int l1=s1.size();
     int l2=s2.size();
     char c1=s1[l1-1];
     char c2=s2[l2-1];
     if(c1>c2)
     {
         cout<<"<"<<endl ;
     }
     else if(c1<c2)
     {
         cout<<">"<<endl ;
     }
     else if(c1==c2)
     {
         if(l1==l2)
         {
             cout<<"="<<endl ;
         }
         else if(c1=='S' && c2=='S')
         {
            if(l1<l2){
                cout<<">"<<endl ;
            }
            else
            {

                cout<<"<"<<endl ;
            }
         }
         else
         {
             if(l1>l2)
             cout<<">"<<endl ;
             else
            cout<<"<"<<endl ;

         }

     }
  }

}

