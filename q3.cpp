#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void linear_search( vector<int>&v,int start,int end,int n ,int key)
{
  int flag = 0;
  for(int i = start;i<min(end,n);i++)
  {
    if(v[i]==key)
    {
      cout<<" present " << endl;
      flag++;
      break;
    }
  }
  if(flag == 0)
  {
    cout<<" not present "<<endl;
  }
};
void jump_search( vector<int>&v,int n,int key)
{
 int  start = 0;
   int end = sqrt(n);
 int  window = sqrt(n);
  while( end < n && v[end-1] < key)
  {
    start = end;
    end += window;
  }
  linear_search( v ,start ,end ,n,key);
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i =0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int key;
        cin>>key;
        jump_search(v,n,key);
    }
}