//Reverse Number

#include<stdio.h>

int main()
{
  int x,i,n;

  printf("Enter the digit\n");
  scanf("%d",&x);

  while(x/10>1)
  {
    n=x%10;
    printf("%d",n);
    x=x/10;
  }
  printf("%d",x);

  return 0;
}



