//Bismillah
#include<bits/stdc++.h>
using namespace std ;
struct Pair
{
    int Min ;
    int Max ;

};
struct Pair getmin_max(int arr[],int n)
{
     struct Pair Minmax ;
     int i=0 ;
     if(n%2==0){
         if(arr[0]>arr[1])
         {
             Minmax.Max=arr[0];
             Minmax.Min=arr[1] ;
         }
         else
         {
             Minmax.Min=arr[0] ;
             Minmax.Max=arr[1];
         }
         i=2 ;
     }
     else
     {
         Minmax.Max=arr[0];
         Minmax.Min=arr[0];
         i=1 ;
     }
    while(i<n)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>Minmax.Max)
                Minmax.Max=arr[i];
            if(arr[i+1]<Minmax.Min)
                Minmax.Min=arr[i+1];
        }
        else{
             if(arr[i+1]>Minmax.Max)
                Minmax.Max=arr[i+1];
            if(arr[i]<Minmax.Min)
                Minmax.Min=arr[i];

        }
        i+=2 ;
    }
    return Minmax ;
}

struct Pair getmin_max_using_recursion(int arr[],int low,int high)
{
     struct Pair Minmax,mml,mmr ;
     int i=0,mid ;

     if(low==high){
            Minmax.Max=arr[0];
         Minmax.Min=arr[0];
         return Minmax;
     }
     if(low+1==high)
     {

         if(arr[low]>arr[high])
         {
             Minmax.Max=arr[low];
             Minmax.Min=arr[high] ;
         }
         else
         {
             Minmax.Min=arr[low] ;
             Minmax.Max=arr[high];
         }
         return Minmax ;
     }
      mid=(low+high)/2 ;
     mml=getmin_max_using_recursion(arr,low,mid);
     mmr=getmin_max_using_recursion(arr,mid+1,high);

    if(mml.Min<mmr.Min)
    {
        Minmax.Min=mml.Min ;
    }
    else
    {
        Minmax.Min=mmr.Min ;
    }

    if(mml.Max<mmr.Max)
    {
        Minmax.Max=mmr.Max;
    }
    else
    {
        Minmax.Max=mml.Max;
    }


    return Minmax ;
}













int main()
{
 int arr[]={1,2,3,4,5,6,7,8};
 struct Pair Minmax ;
  //Minmax=getmin_max(arr,sizeof(arr)/sizeof(int));
  Minmax=getmin_max_using_recursion(arr,0,(sizeof(arr)/sizeof(int))-1);
  cout<<Minmax.Max<<" "<<Minmax.Min<<endl ;



}

/* total comparison needed:
If n is odd:    3*(n-1)/2
       If n is even:   1 Initial comparison for initializing min and max,
                           and 3(n-2)/2 comparisons for rest of the elements
                      =  1 + 3*(n-2)/2 = 3n/2 -2*/

