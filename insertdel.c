#include<stdio.h>
#define n 10
int a[n],i;
int r=-1,f=-1;
int insert(int k)
{
    if(f<0 || r<0)
    {
        f=0,r=0;
        a[r]=k;
    }
    if(r > n-1)
    {
        printf("Array is full.");
    }
    else{        
        r++;
        a[r]=k;
    }
}
int delete()
{
    if(f==r)
    {
        f=-1,r=-1;
    }
    if(f<0 || r<0)
    {
        printf("Array is empty.");
    }
    else{
        f++;
    }
}
int display()
{
    if(r<0 || f<0)
    {
        printf("Array is Empty .");
    }
    else{
        for(i=f+1;i<r+1;i++)
        {
            printf("%d ",a[i]);
        }      
    }
}
int main()
{
    int ch;
    printf("1. Insert Array");
    printf("\n2. Delete Array ");
    printf("\n3. Display ");
    printf("\n0. close ");
    do{
        int val;
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter Your Array :");
                    scanf("%d",&val);
                    insert(val);
                    break;
            case 2:
                    delete();
                    break;
            case 3:
                    display();
                    break;
            case 0:
                    printf("End Program.");
                    break;
            default:
                    printf(" close .");
                    break;
        }
    }while(ch != 0);
    return 0;
}


