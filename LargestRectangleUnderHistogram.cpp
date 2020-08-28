#include<bits/stdc++.h>
using namespace std;
struct StackItem
{
    int height;
    int index;
};
int main()
{
    int arr[]= {3,2,4,5,1,4,4};
    int Size=sizeof(arr)/sizeof(arr[0]);
    int maxArea=-1,currentArea,left,h;
    stack<StackItem * > st;
    for(int i=0; i<=Size; i++)
    {
        while(!st.empty() && (i==Size || st.top()->height > arr[i]))
        {
            left=st.top()->index;
            h = arr[left];
            st.pop();
            if(st.empty())
            left=0;
            currentArea=(i-left)*(h);
             cout<<currentArea<<" ";
            if(currentArea > maxArea)
            {
            maxArea=currentArea;
            }

        }
        if(i<Size)
        {
        StackItem * s=new StackItem();
        s->height=arr[i];
        s->index=i;
        st.push(s);
        }

    }
   cout<<maxArea<<endl;
}
