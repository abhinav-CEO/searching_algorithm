#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int first_occur(vector<int>&v,int n,int key)
{
    int s = 0;int end = n-1;
    int mid = -1,ans= -1;
    while(s<=end)
    {
        mid = (s+end)/2;
        if(v[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(key>v[mid])
        {
            s = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return ans;
}
int last_occur(vector<int>&v, int n,int key)
{
    int s = 0;int end = n-1;
    int mid = -1,ans =-1;
     while(s<=end)
    {
        mid = (s+end)/2;
        if(v[mid]==key)
        {
            ans = mid;
            s = mid+1;
        }
        else if(key>v[mid])
        {
            s = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i =0;i<n;i++)
        {
            cin>>v[i];
        }
        int key;
        cin>>key;
        int fi = first_occur(v,n,key);
        int li = last_occur(v,n,key);

        cout<<key<< "-"<<li-fi+1;
    }
}