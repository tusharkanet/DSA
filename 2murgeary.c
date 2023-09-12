#include<stdio.h>
int main()
{
    int a[70], b[80], t, r, n, y, u[60];
    printf("Enter Array 1: ");
    scanf("%d", &t);
    printf("Enter Array 1 Elements: ");
    for(n=0; n<t; n++)
     {
        scanf("%d", &a[n]);
        u[n] = a[n];
    }
    y = n;
    printf("\nEnter Array 2 : ");
    scanf("%d", &r);
    printf("Enter Array 2 Elements: ");
    for(n=0; n<r; n++)
    { 
        scanf("%d", &b[n]);
        u[y] = b[n];
        y++;
    }
    printf("The new array after murge is:\n");
    for(n=0; n<y; n++)
        printf("\t%d ", u[n]);
    return 0;
}