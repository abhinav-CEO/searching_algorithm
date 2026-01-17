#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void find(vector<int>& v, int n)
{
    sort(v.begin(), v.end());   // MUST

    for(int k = n - 1; k >= 2; k--)
    {
        int sum = v[k];
        int i = 0, j = k - 1;

        while(i < j)
        {
            if(v[i] + v[j] == sum)
            {
                cout << v[i] << " " << v[j] << " " << v[k] << endl;
                break;   // remove break if you want all triplets
            }
            else if(v[i] + v[j] < sum)
                i++;
            else
                j--;
        }
    }
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
        find(v,n);
    }
}