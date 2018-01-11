#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,n,p;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        p=n*(n+2);
        printf("%lld\n",p);
    }


    return 0;
}
