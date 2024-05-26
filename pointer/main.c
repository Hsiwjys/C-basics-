// basics of Pointer

#include <stdio.h>
#include <stdlib.h>
 // syntax for pointer
 // data type*pointer  name;

int*num;
char*mun;
int pass;
int function(int ass, int vsd);
int main()
{
	pass = 56;
	num = &pass;
	printf("%d",*num); // printing the numbers using pointer
	int a[] = {1,2,3,4, 5,6 };
	int *p = &a[3];
	int *q= &a[5];
	printf("\n%d", p<=q);
	printf("\n%d", p>=q);
	q = &a[3];
	printf("\n%d", p==q);
 }
