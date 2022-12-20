//Bismillah
#include<bits/stdc++.h>
using namespace std;
//vector<int>arr ;
set<int>st ;
void Min_heap(int arr[],int index,int size) ;
int  delete_from_heap(int arr[],int l);
void display(int arr[]);
void Max_heapify(int arr[],int index,int size) ;
void build_heap(int arr[],int size) ;
void read_from_file(vector<int>&v)
{
    FILE *fp;
    char file_name[]="input.txt" ;
    int i=0,a;
    fp=fopen(file_name,"r");
    while (!feof(fp))
    {
        fscanf(fp,"%d",&a);
        v.push_back(a) ;
        st.insert(a) ;

    }
    fclose(fp) ;

}

int  kth_max_min(int arr[],int k,int l)
{
   /* //using sorting
      sort(arr.begin(),arr.end());
    cout<<arr[k-1] ;*/

/*
 //using set data structure
   set<int>s(arr.begin(),arr.end());
   for(auto u:s)
    cout<<u<<endl ;
   set<int>::iterator itr=s.begin() ;
   advance(itr,10);
   cout<<"itr="<<*itr  ;*/
  //using heap data structure
  build_heap(arr,l) ;
  for(int i=0 ;i<k-1 ;i++)
  {
      delete_from_heap(arr,l);
  }
return  arr[0];

}
void build_heap(int arr[],int size)
{

    for(int i=(size/2);i>=0 ;i--)
    {
       // Max_heapify(arr,i,size);
       Min_heap(arr,i,size) ;


    }

}
void Max_heapify(int arr[],int index,int size)
{
    int left=index*2+1 ;
    int right=index*2+2 ;
    int max=index ;
    if(left<=size && arr[left]>arr[max])
    {
        max=left ;
    }
    if(right<=size && arr[right]>arr[max])
    {
        max=right ;
    }
    if(index!=max)
    {
      swap(arr[max],arr[index]) ;
        Max_heapify(arr,max,size) ;
    }

}
void Min_heap(int arr[],int index,int size)
{
    int left=2*index+1 ;
    int right=left+1 ;
    int min=index ;
    if(left<=size && arr[min]<arr[left])
    {
        min=left ;
    }
    if(right<=size && arr[min]<arr[right])
    {
        min=right ;
    }
    if(min!=index)
    {
        swap(arr[min],arr[index]);
        Min_heap(arr,min,size );
    }
}
int  delete_from_heap(int arr[],int l)
{
  if(l==0)
    return 0 ;
  int root =arr[0];
  if(l>1)
  {
      arr[0]=arr[l-1];
     Min_heap(arr,0,l) ;
  }
  l-- ;
  return root ;
}
void find_kth_minmax_using_map(map<int,int>mp,int k)
{
    int freq=0 ;
//    for();
}

void display(int arr[],int l)
{

    for(int i=0 ;i<l ;i++)
    {
        cout<<arr[i]<<" "  ;
    }
}
int main()
{
    vector<int>v ;
    read_from_file(v) ;
    sort(v.begin(),v.end()) ;
    v.erase(std::unique(v.begin(), v.end()), v.end());
    int l=v.size();
    cout<<"size="<<l<<endl ;
    int arr[l] ;
    for(int i=0 ;i<l;i++)
    {
        arr[i]=v[i] ;
    }
    //cout<<"kth element->"<< Min_heap(arr,0,l);

     display(arr,l) ;





}

