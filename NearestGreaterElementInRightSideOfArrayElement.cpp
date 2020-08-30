#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {4,3,6,3,8,9,2,5};
    int Size=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    for(int i=Size-1; i>=0; i--)
    {
        while(!st.empty() && arr[i]>st.top())
        {
            st.pop();
        }
        if(st.empty())
        {
            st.push(arr[i]);
            arr[i]=arr[i];
        }
        else
        {
        int k=arr[i];
        arr[i]=st.top();
        st.push(k);
        }
    }
    for(int i=0;i<Size;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
