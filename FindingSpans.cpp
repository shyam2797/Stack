#include<bits/stdc++.h>
using namespace std;
struct StackItem
{
    int index;
    int height;
};
int main()
{
    int arr[]= {6,3,4,5,2};
    int Size = sizeof(arr)/sizeof(arr[0]);
    int S[Size],left=0;
    stack<StackItem * > st;
    for(int i=0; i<Size; i++)
    {
        while(!st.empty() && (arr[i])>st.top()->height)
        {
            st.pop();
        }
        if(st.empty())
            left=-1;
        else
        {
            left=st.top()->index;
        }
        S[i]=i-left;
        StackItem * s =new StackItem();
        s->index=i;
        s->height=arr[i];
        st.push(s);
    }
    for(int i=0; i<Size; i++)
    {
        cout<<S[i]<<" ";
    }
    cout<<endl;
}
