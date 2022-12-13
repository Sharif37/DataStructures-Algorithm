//Bismillah
#include<bits/stdc++.h>
using namespace std ;
long  help(int n)
{
    switch(n)
    {
    case 2:
        return 10 ;
        break ;
    case 3 :
        return 100 ;
    case 4:
        return 1000 ;
        break ;
    case 5:
        return 10000 ;
        break ;
    case 6:
        return 100000 ;
        break ;
        case 7:
            return  1000000 ;
    }
}
int main()
{
int t ;
cin>>t ;
while(t--)
{
    string s ;
    cin>>s ;
    int l=s.size() ;
    int n=stoi(s) ;

    int ans=9 ;
    for(int i= 2 ;i<l ;i++)
    {
       ans+=10 ;
    }


   if((n/help(l))>0 && n%help(l)>=10)
   {
       ans+=(n/help(l))-1 ;
   }
   else
   {
       ans+=(n/help(l)) ;
   }

    cout<<ans-1<<endl ;
}



