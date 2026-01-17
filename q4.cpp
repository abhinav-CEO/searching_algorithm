#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find(vector<int>&v,int n,int key)
{
       int start = -1, end = -1;

    for(int i = 0; i < n; i++)
    {
        if(v[i] == key)
        {
            if(start == -1)
                start = i;
            end = i;
        }
    }

    if(start == -1)
        cout << "Key not found" << endl;
    else
        cout << "answer = " << end - start << endl;

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
        find(v,n,key);
    }
}