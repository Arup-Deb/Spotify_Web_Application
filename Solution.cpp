#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int arr[n];
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(p==0)
        {
            cout<<sum<<endl;
        }
        else
        {
        int q=0;
        while(sum>=q)
        {
            q+=p;
        }
         q=q-p;
        int k=sum-q;
        cout<<k<<endl;
        }
    }
}