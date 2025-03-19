#include <stdio.h>
#include <math.h>
int nt(int n)
{
    if( n <= 1 ) return 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    long long n;
    int i = 0, a[18], counted[10] = {0};
    scanf("%lld", &n);
    while(n > 0)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    for( int j = i - 1 ; j >=0 ; j--)
    {
        if( nt(a[j]) && !counted[a[j]])
        {
            int cnt = 0;
            for(int k = j; k >= 0; k--)
            {
                if(a[j] == a[k])
                {
                    cnt++;
                }
            }
            printf("%d %d\n",a[j], cnt);
            counted[a[j]] = 1;
        }
    }
    return 0;
}
