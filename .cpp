#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int i=1;
    while(scanf("%lf",&n)==1)
    {
        if(n==0)
            break;
        else
        {
            double sum=ceil( ( sqrt( n * 8 + 9 ) - 1 ) / 2 ) + 2;
            printf("Case %d: %.0lf\n",i,sum );
        }
        i++;
    }
    return 0;
}
