#include <stdio.h>
#define n 5
int a[n];
int k = -1, i;
int display()
{
  if (k < 0)
  {
    printf("\nArry is empty .....");
  }
  else
  {
    for (i = 0; i <= k; i++)
    {
      printf("  %d  ", a[i]);
    }
  }
}

int firstInsert(int value)
{
  if (k >= n - 1)
  {
    printf("\n Arry is full :");
    
  }
  else
  {
    for (int i = k; i >= 0; i--)
    {
      a[i + 1] = a[i];
    }
    a[0] = value;
    k++;
    
  }
}

int firstDelete()
{
  int x;
  if (k < 0)
  {
    printf("\n Arry is already empty :");
   
  }
  else
  {
    x = a[0];
    for (int i = 0; i < k; i++)
    {
      a[i] = a[i + 1];
    }
    k--;
    return x;
  }
}

int insertEnd(int val)
{
  if (k >= n - 1)
  {
    printf("\n Arry is full :");
  }
  else
  {
    k++;
    a[k] = val;
  }   
}

int delete()
{
  int x;
  if (k < 0)
  {
    printf("Arry is already empty :");
  }
  else
  {
    x = a[k];
    k--;
    return x;
  }
}


int main()  
{
  firstInsert(100);
  display();
  firstDelete();
  
  display();
}
