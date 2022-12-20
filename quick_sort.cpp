//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int partition(int A[],int p ,int r)
{
    int x=A[r];
int     i=p-1 ;
    for(int j=p ;j<=r-1 ;j++)
    {
        if(A[j]<=x)
        {
            i++ ;
            swap(A[i],A[j]);

        }

    }
     swap(A[i+1],A[r]);
      return i+1 ;
}

void quicksort(int A[],int p ,int r)
{
    int pivot ;
    if(p<r)
    {
        pivot=partition(A,p,r);
        quicksort(A,p,pivot-1);
        quicksort(A,pivot+1,r);
    }
}
int main()
{
  int A[8]={2,4,1,6,3,8,5,7};
  quicksort(A,0,7);
  for(auto u:A)
  {
      cout<<u<<" " ;
  }



}

