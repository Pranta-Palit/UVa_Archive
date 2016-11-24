#include<bits/stdc++.h>
#define LL long long
using namespace std;
void Go(LL a, LL b, LL c, LL  i)
{
    LL arr[4] = {a,b,c};
    sort(arr,arr+3);
    printf("Case %lld: %lld\n",i,arr[1]);
    //k++;
}
int main()
{
    LL a,b,c,n;
    scanf("%lld",&n);
    for(LL i=1; i<=n; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        Go(a,b,c,i);
    }
    return 0;
}
