#include<bits/stdc++.h>
#define int1 long long
using namespace std;
int main()
{
    int1 n;
    while(scanf("%lld",&n) != EOF)
    {
        int1 sum=0;
        if(n<0)
            break;
        else
        {
            sum=((n*(n+1))/2)+1;
            printf("%lld\n",sum);
        }
    }
    return 0;
}
