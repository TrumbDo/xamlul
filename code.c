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
    int n = 112345;
    int a[19];
    int i = 0;
    while(n > 0)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    for( ; i >=0 ; i--)
    {
        if(nt(a[i]))
        {
            printf("%d ", a[i]);
            int cnt = 0;
            for(int j = i; j >= 0; j--)
            {
                if(a[i] == a[j])
                {
                    cnt++;
                }
            }
            printf("%d", cnt);
            printf("\n");
        }
    }

}