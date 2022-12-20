//Bismillah
#include<bits/stdc++.h>
using namespace std ;
void DutchNationalFlagALgorithm(int arr[],int n)
{
    int left=0 ;
    int right=n-1 ;
    while(left<=right)
    {
        if(arr[left]<0)
        {
            left++ ;
        }
        else if(arr[right]>=0)
        {
            right-- ;
        }
        else
        {
            swap(arr[left],arr[right]);
        }
    }
}
void Rearrage(int arr[],int n)
{
    int left=0 ;
    int right=n-1 ;
    for( ; left<=right;)
    {
        if(arr[left]>=0 && arr[right]<0 )
        {

            swap(arr[left],arr[right]) ;
            right-- ;
            left++ ;
        }
        else if(arr[left]<0 && arr[right]<0)
        {
            left++ ;
        }
        else if(arr[left]>=0 && arr[right]>=0)
        {
            right-- ;
        }
        else
        {
            right-- ;
            left++ ;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Rearrage(arr,n) ;
    DutchNationalFlagALgorithm(arr,n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");


}

