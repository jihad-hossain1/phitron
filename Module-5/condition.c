#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    if(a>=b){
        printf("yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}