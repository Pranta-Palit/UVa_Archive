#include<bits/stdc++.h>
using namespace std;
#define LL long long
void Go(LL a,LL b)
{
    printf("%lld\n",a*b*2);
}
int main()
{
    LL a,b;
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        Go(a,b);
    }
    return 0;
}
