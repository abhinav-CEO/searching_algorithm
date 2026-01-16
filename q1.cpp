#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void linear_search( vector<int>v,int n ,int key)
{
    int comp = 0;
  for(int i = 0;i<n;i++)
  {
    comp++;
    if(v[i]==key)
    {
      cout<<" present " << ""<<comp;
      break;
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
        linear_search(v,n,key);
    }
}