#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void binary_search( vector<int>&v,int n ,int key)
{
    int comp = 0;
    int s = 0 , end = n-1; 
    int middle = -1;
    while(s<=end)
    {
      comp++;
      middle = (s+end)/2;
      if(v[middle] == key)
      {
        cout<<" present " <<""<<comp;
        break;
      }
      else if(v[middle] < key)
      {
        s = middle + 1;
      }
      else
      {
        end = middle -1;
      }
    }
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
        int key;
        cin>>key;
        binary_search(v,n,key);
    }
}