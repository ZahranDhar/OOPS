//Numerical To Word Conversion Using Array Index//

#include<stdio.h>
#include<string.h>

void numtoword(int x, char (*p)[7]);
int main()
{
  char arr[20][7],j;
  int x,i,n;

  printf("Enter the number.\n");
  scanf("%d",&x);

  i=0;
  while(x>0)
  {
    numtoword(x%10,&arr[i]);
    x=x/10;
    i++;
  }
 i--;
 
  for(j=i;j>=0;j--)
  {
    printf("%s ",arr[j]);
  }

  return 0;
}

void numtoword(int x, char (*p)[7])
{
  switch (x)
  {
    case 0:
    strcpy(*p,"Zero");
    break;
    
    case 1:
    strcpy(*p,"One");
    break;

    case 2:
    strcpy(*p,"Two");
    break;

    case 3:
    strcpy(*p,"Three");
    break;

    case 4:
    strcpy(*p,"Four");
    break;

    case 5:
    strcpy(*p,"Five");
    break;

    case 6:
    strcpy(*p,"Six");
    break;

    case 7:
    strcpy(*p,"Seven");
    break;

    case 8:
    strcpy(*p,"Eight");
    break;

    case 9:
    strcpy(*p,"Nine");
    break;

  }
}

