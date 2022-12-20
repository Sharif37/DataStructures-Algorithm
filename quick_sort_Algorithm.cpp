//Bismillah
#include<bits/stdc++.h>
using namespace std ;

int  read_from_file(int arr[])
{
    FILE *fp;
    char file_name[]="input.txt" ;
    int i=1,a;
    fp=fopen(file_name,"r");
    while (!feof(fp))
    {
        fscanf(fp,"%d",&a);
       arr[i++]=a ;

    }
    fclose(fp) ;
return i ;
}

int partition(int arr[],int l,int h)
{

    int pivot=arr[h] ,j=l-1 ;
    for(int i=l;i<=h-1 ;i++)
    {
        if(arr[i]<pivot)
        {
            j++ ;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j+1],arr[h]);
    return j+1 ;
}
void quick_sort(int arr[],int l,int r)
{

    if(l<r)
    {
        int pivot=partition(arr,l,r);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,r);
    }
}
int main()
{
    int arr[1006];
   int k= read_from_file(arr);

 quick_sort(arr,1,k);

for(int i=1;i<=k ;i++)
    cout<<arr[i]<<" " ;
}

