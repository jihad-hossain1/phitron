#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int V[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V[i]);
    }

    int sumPositive = 0;
    int sumNegative = 0;

    // Iterate through the array
    for (int i = 0; i < N; i++)
    {
        if (V[i] > 0)
        {
            sumPositive += V[i];
        }
        else if (V[i] < 0)
        {
            sumNegative += V[i];
        }
    }

    printf("%d %d\n", sumPositive, sumNegative);

    return 0;
}