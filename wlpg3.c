#include<stdio.h>
void pattrn()
{
    int i,j,n=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%d ",n++);
            j++;
        }
        printf("\n");
        i++;
    }
    
    
}
int main()
{
    pattrn();
    return 0;
}





