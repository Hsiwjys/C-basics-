#include <stdio.h>
#include <stdlib.h>
void suma(int no, int yes);  // call by value function
void mass(int *tv, int *mobile); // call by reference function
void main()
{
	int good=10, bad=20;
	suma(good,bad);
	printf("the value of good and bad is %d,%d",good,bad);   //value are not changed after using the function defination
	mass(&good, &bad);
	printf("\nthe value of goood and bad is %d,%d",good,bad);  //value are changed after using the function defination
}
void suma(int no, int yes)
{
	int good=20;
	int bad=10;
}
void mass(int *tv, int *mobile) // using pointers changing values
{
	*tv = 20;
	*mobile = 10;
}
