#include<bits/stdc++.h>
using namespace std;

void NextGreaterToLeft(int *arr , int n)
{
    vector<int>v;
    stack<int>s;
    for(int i = 0 ; i < n ; i++)
    {
        if(s.empty())
            v.push_back(-1);
        
        else if(!s.empty() && s.top() > arr[i])
            v.push_back(s.top());
        
        else if(!s.empty() && s.top() <= arr[i])
        {
            while(!s.empty() && s.top() <= arr[i])
            {
                s.pop();
            }
            
            if(s.empty())
                v.push_back(-1);
            else
            v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    
    for(auto i : v)
    cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    cin>>arr[i];

    NextGreaterToLeft(arr , n);

}