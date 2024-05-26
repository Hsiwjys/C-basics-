//print single and two dimensional array 
#include<stdio.h>
void singleDimensionArray(int a[9],int i);
void twoDimensionalArray(int arf[5][5],int i,int j,int sum);
void main()
{
int a[9]= {34, 56, 54, 32, 67, 89, 90, 32, 21};
int i; 
singleDimensionArray(a,i);
int arf[5][5] ={{8, 3, 9, 0, 10},{3, 5, 17, 1, 1},{2, 8, 6, 23, 1},{15, 7, 3, 2, 9},{6, 14, 2, 6, 0}};
int j;
int sum=0;
twoDimensionalArray(arf,i,j,sum);
}
void singleDimensionArray(int a[9],int i)
{
	
for(i=0; i<9; i++)
{ 
    printf("%d ", a[i]);
}
printf("\n");
//Reverse order
for(i=8; i>=0; i--) 
{ 
    printf("%d", a[i]);
}
}
void twoDimensionalArray(int arf[5][5],int i,int j,int sum)
{
	
//Row sum
printf("\nRow total: ");
for(i=0; i<5; i++)
{
	for(j=0; j<5; j++)
	{
		sum += arf[i][j];
	}
	printf("%d", sum); 
	sum=0;
}
printf("\nColumn total: ");
for(j=0; j<5; j++)
{ 
	for(i=0; i<5; i++)
	{
		sum += arf[i][j];
	}
 	printf("%d", sum); sum=0;
}
}
