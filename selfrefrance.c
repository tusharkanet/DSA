#include<stdio.h>
struct node 
{
    int data;
    struct node *ptr;
};
int main()
{
    struct node a,b;
    a.data = 65;
    a.ptr = NULL;

    b.data = 70;
    b.ptr = NULL;

    //printf("a: data: %d\n",a.data);
    //printf("b: data: %d\n",b.data);

    b.ptr = &a;
    a.ptr = &b;
    printf("A:data:%d\n",b.ptr->data);
    printf("B:data:%d\n",a.ptr->data);

}   