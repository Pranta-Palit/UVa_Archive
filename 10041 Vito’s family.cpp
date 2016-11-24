#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int n,m;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>m;
        int s=0;
        for(int j=0; j<m; j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+m);

        for(int k=0; k<m; k++)
        {
            if(k!=m-1)
            {
                //sum[k] =
                //cout<<sum[i]<<endl;
                s+=arr[k+1]-arr[k];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
