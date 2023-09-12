
#include<stdio.h>
#include<stdlib.h>
int n;
void print(int B[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d ",B[i]);
    }
}
void quicksort(int B[],int F,int L)
{
    int i,j,T,P;
    if(F<L)
    {
        print(B);
        P = F;
        i=F, j=L;
        while(i<j)
        {
            while (B[i]<=B[P] && i<L)                    
                        

            {
                i++;
            }
            while(B[j] > B[P])
            {
                j--;
            }
            if(i<j)
            {
                T =B[i];
                B[i]=B[j];
                B[j]=T;
            }
            
        }
        T = B[P];
        B[P] = B[j];
        B[j] = T;

        quicksort(B,F,j-1);
        quicksort(B,j+1,L);
    }
}
int main()
{
    //int B[] = {60,10,40,70,50,20,80,30,90};
    int B[25],i;
    printf("How many elements enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        B[i] = rand()%100+1;
    }
    print(B);
    quicksort(B,0,n-1);
    printf("\n After Quick Sort :");
    print(B);
}

