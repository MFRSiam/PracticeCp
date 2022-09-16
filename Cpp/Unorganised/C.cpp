#include <cstdio>


int a, b, c, d, e, f;
int modulo = 10000007;
long long x[10005];

long long fn(long long n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            x[i] = a;
            continue;
        }
        if (i == 1)
        {
            x[i] = b;
            continue;
        }
        if (i == 2)
        {
            x[i] = c;
            continue;
        }
        if (i == 3)
        {
            x[i] = d;
            continue;
        }
        if (i == 4)
        {
            x[i] = e;
            continue;
        }
        if (i == 5)
        {
            x[i] = f;
            continue;
        }
        x[i] = x[i - 1] + x[i - 2] + x[i - 3] + x[i - 4] + x[i - 5] + x[i - 6];
        x[i] = x[i] % 10000007;
    }
    return x[n];
}


int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", caseno, fn(n) % 10000007);
    }
    return 0;
}