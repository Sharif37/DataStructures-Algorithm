//Bismillah
#include<bits/stdc++.h>
using namespace std ;

void Cocktailsort(int A[],int n)
{
     int i,swapped ;
     do{
        swapped=0 ;
        for(int i=0 ;i<n-2 ;i++)
        {
            if(A[i]>A[i+1])
            {
                swap(A[i],A[i+1]) ;
                swapped=1 ;
            }
        }
        if(!swapped)
        {
            break ;
        }
        swapped=0 ;
        for(int i=n-2 ;i>=0 ;i--)
        {
            if(A[i]>A[i+1])
            {
                swap(A[i],A[i+1]) ;
                swapped=1 ;
            }
        }
     }while(swapped) ;
}
int main()
{
 int A[8]={2,4,1,6,3,8,5,7} ;
 int n=sizeof(A)/sizeof(int) ;
 Cocktailsort(A,n) ;
 for(auto u:A)
 {
     cout<<u<<" " ;
 }


}

