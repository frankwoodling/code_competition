// HackerRank Practice Problems
// C++ > Introduction > Pointer

#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    int a_t = *a;
    *a =  a_t + *b;
    *b = abs(a_t - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


// can do absolute difference this way too
// int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);