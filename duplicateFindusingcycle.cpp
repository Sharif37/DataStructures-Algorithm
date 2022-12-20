#include<bits/stdc++.h>
using namespace std ;
void cycle(int arr[])
{
    int tor=arr[0] ;
    int har=arr[0] ;
    int x=20 ;
    while(1)
    {
        //1 2 3 3 4 5  

        tor=arr[tor] ; 
        har=arr[arr[har]] ;
        if(tor==har)
        break  ;
        
    }
    tor=arr[0] ;
    while(tor!=har)
{
    tor=arr[tor] ;
    har=arr[har] ;
    cout<<tor<<" "<<har<<endl ;
}

}
int main()
{
    int n ;
    cin>>n ;
    int arr[n] ;
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i]  ;
    }
   cycle(arr) ;


}