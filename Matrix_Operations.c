//Matrix Operations

#include<stdio.h>
void menu();
void addition();
void subtraction();
void transpose();
void multiplication();
void readmatrix(int mat[10][10],int m, int n);
void display(int mat[10][10], int m, int n);

int main()
{
  menu();
}

void menu()
{
  int x;
  printf("Enter 1 for Matrix Addition.\nEnter 2 for Matrix Subtraction.\nEnter 3 for Matrix Transpose.\nEnter 4 for Matrix Multiplication.\n");
  scanf("%d",&x);

  //Cases
  switch(x)
  {
    case 1:
    addition();
    break;

    case 2:
    subtraction();
    break;

    case 3:
    transpose();
    break;

    case 4:
    multiplication();
    break;

    default:
    printf("Invalid input.\n");
    break;
  }
}

void addition()
{
  int mat1[10][10],mat2[10][10],mat3[10][10],m,n,i,j;

  printf("Enter the number of rows and columns.\n");
  scanf("%d %d",&m,&n);
  readmatrix(mat1,m,n);
  readmatrix(mat2,m,n);

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
  }
  
  display(mat3,m,n);
}

void readmatrix(int mat[10][10],int m, int n)
{
  int i,j;

  printf("Enter the elements of matrix row by row.\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&mat[i][j]);
    }
  }
}

void display(int mat[10][10], int m, int n)
{
  int i,j;

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",mat[i][j]);
    }
   printf("\n");
  }
  
}

void subtraction()
{
  int mat1[10][10],mat2[10][10],mat3[10][10],m,n,i,j;

  printf("Enter the number of rows and columns.\n");
  scanf("%d %d",&m,&n);
  readmatrix(mat1,m,n);
  readmatrix(mat2,m,n);

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      mat3[i][j]=mat1[i][j]-mat2[i][j];
    }
  }
  
  display(mat3,m,n);
}

void transpose()
{
  int mat1[10][10],mat2[10][10],m,n,i,j;

  printf("Enter the number of rows and columns.\n");
  scanf("%d %d",&m,&n);
  readmatrix(mat1,m,n);

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      mat2[j][i]=mat1[i][j];
    }
  }

  display(mat2,m,n);
}

void multiplication()
{


}