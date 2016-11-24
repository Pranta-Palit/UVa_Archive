#include<bits/stdc++.h>
using namespace std;
long long int ipow(long long int base, long long int exp)
{
    long long int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}

int main()
{
    long long int n,m;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        cin>>m;
        //long long int b = ipow(2,m-1);
        int b = pow(2,m-1);

        printf("Case #%lld: %lld\n",i,b*m);
    }
    return 0;
}
