//Add Digits Of Number

#include<stdio.h>

int main()
{
  int x,sum=0;

  printf("Enter the digit\n");
  scanf("%d",&x);

  while(x/10>1)
  {
    sum=sum+(x%10);
    x=x/10;
  }

  sum=sum+x;

  printf("The sum is %d",sum);

  return 0;
}





