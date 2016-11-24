#include<bits/stdc++.h>
using namespace std;
#define LL long long
void Go(LL a, LL b)
{
    if(a>=b)
        printf("%lld\n",a-b);
    else
        printf("%lld\n",b-a);
}
int main()
{
    LL a,b;
    while(scanf("%lld%lld",&a,&b) != EOF)
    {
        Go(a,b);
    }
    return 0;
}
