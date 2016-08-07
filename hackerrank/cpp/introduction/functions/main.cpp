// HackerRank Practice Problems
// C++ > Introduction > For Loop

#include <iostream>

int max_of_four(int a, int b, int c, int d)
{
    int maximum;
    maximum = std::max(a, b);
    maximum = std::max(maximum, c);
    maximum = std::max(maximum, d);

    return maximum;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

// better logic
// return((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d));

// also good
// return max(max(a,b),max(c,d))