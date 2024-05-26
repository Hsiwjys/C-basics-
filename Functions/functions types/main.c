#include <stdio.h>
#include <stdlib.h>

void noarnort(void); // function declaration of no argument and no return type
int noarwrt(void);   // function declaration of no argument and with return type
void warnort(int,int); // function declaration of with argument and no return type
int warwrt(int,int);   // function declaration of with argument and with return type
int main ()
{
    int a=2,b=3,s,d;
	noarnort();
	s=noarwrt();
	printf("\nthe value s is %d",s);
	warnort(a,b);
	d=warwrt(a,b);
	printf("\nthe value d is %d",d);
}

void noarnort()
{
	int a=12,b=34;
	printf("sum is %d",a+b);
}

int noarwrt()
{
    int a=34,b=45;
    return a+b;
}

void warnort(int x,int y)
{
    printf("\nsum is %d",x+y);
}

int warwrt(int x,int y)
{
    return x+y;
}
