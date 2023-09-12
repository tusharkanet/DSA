#include <stdio.h>
#define n 5
int a[n];
int top = -1;
int display() {

  for (int i = 0; i <= top; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
int insert(int val) {
  if (top >= n - 1) {
    printf("Array is full\n");
  } else {
    top++;
    a[top] = val;
  }
}
int delete() {
  if (top < 0) {
    printf("Array is empty\n");
  } else {
    int x = a[top];
    top--;
    return x;
  }
}

int main() {
  insert(10);
  insert(20); 
  insert(30); 
  insert(40); 
  insert(50); 
  insert(60); 
  display();

 int t;
  t = delete(); 
  t = delete();
  t = delete();
  
  display();

  return 0;
}
