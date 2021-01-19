#include<stdio.h>

void sum(int mat1[][3],int mat2[][3],int res[][3],int m, int n )//func to compute sum of the 2 input matrices  
{	
    int i,j;  
     for(i=0;i<m;i++)
       for(j=0;j<n;j++)
          *(*(res+i)+j)  = *(*(mat1+i)+j)   +  *(*(mat2+i)+j);
}  

void input(int MAT[][3],int m,int n)//func to take input matrix from the user
{
    int i,j;
    for(i=0;i<m;i++)
         for(j=0;j<n;j++)
           scanf("%d",(*(MAT+i)+j)); 
}

void output(int MAT[][3],int m,int n)//func to print the output matrix
{
    int i,j;
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
          {
            printf("%d ",*(*(MAT+i)+j));  
       }
        printf("\n"); 
    }
   
}

int main()
{ int a[3][3],b[3][3],c[3][3],m,n,ch,i,j;
 while(1){
 printf("Enter your choice\n1.Sum of two matrices  2.Transpose of a matrix  3.exit\n");
 scanf("%d",&ch);
 if(ch==1)//for addition of two matrices
{
     printf("program to perform addition of two matrices using pointer\n");
  printf("enter the order/size of matrix\n");
  scanf("%d %d",&m,&n);
 
  printf("enter the value of matrix 1 of order %d x %d\n",m,n);
  input(a,m,n);
 
  printf("enter the value of matrix 2 of order %d x %d\n",m,n);
  input(b,m,n);
 
  sum(a,b,c,m,n);
 
  printf("the resultent matric c after adding is\n");
  output(c,m,n);
 }
 else if(ch==2){
     printf("\n How many rows and columns in the matrix:- ");
  scanf(" %d %d",&m,&n);
  printf("\n Enter the elements:- ");
  input(a,m,n);
  /* The transpose of matrix result formation*/
  printf("\n The transpose of matrix is:- \n");
  for(i=0;i<n;i++)
  {
  for(j=0;j<m;j++)
    printf("%5d",a[j][i]);
  printf("\n");
  }
 }
 else if(ch==3)
     exit(0);
}
}
