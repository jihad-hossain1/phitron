#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = N % 2 == 0 ? N - 1 : N - 2; i >= 0; i -= 2)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}