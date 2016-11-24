#include<bits/stdc++.h>
using namespace std;
void Go(int a, int b)
{
    if(a>b)
        printf(">\n");
    else if(a<b)
        printf("<\n");
    else if(a==b)
        printf("=\n");
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        Go(a,b);
    }
    return 0;
}
