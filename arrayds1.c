#include <stdio.h>
int main()
{
    int arr[] = {1, 20, 21, 25, 32, 34, 54, 55};
    // printf("%d", a[1]);
    int a = 10;
    float b = 3.14;
    char c = 'a';
    double d = 'a';
    long double e = 'a';
    // long long double g = 'b';

    printf("\n int %d", sizeof(a));
    printf("\n float %d", sizeof(b));
    printf("\n char %d", sizeof(c));
    printf("\n double %d", sizeof(d));
    printf("\n long double %d", sizeof(e));
    // printf("\n long long double %d", sizeof(g));

    printf("\n\n array %d", sizeof(arr));
    printf("\n\n array %d", sizeof(arr[0]));
    printf("\n\n array size:%d", sizeof(arr) / sizeof(arr[0]));
    return 0;
}