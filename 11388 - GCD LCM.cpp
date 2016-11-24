#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(b%a==0)
            printf("%d %d\n",a,b);
        else if(a==1 && b>1)
            printf("%d %d\n",a,b);
        else if(a*2==b)
            printf("%d %d\n",a,b);
        else
            printf("%d\n",-1);
    }
    return 0;
}

