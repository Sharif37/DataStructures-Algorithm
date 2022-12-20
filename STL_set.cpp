//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
  set<int>st ;
  st.insert(10);
  st.insert(23);
  st.insert(12);
  st.insert(10);
  st.insert(23);
  st.insert(12);
  auto f=st.find(23);
  if(f!=st.end())
    cout<<"found"<<endl ;
  for(auto u:st)
    cout<<u<<" " ;


}

