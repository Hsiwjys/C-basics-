// basics of strings

#include <stdio.h>
#include <stdlib.h>
// string can be declear by syntax:
// char string name[n];
// string must be in double codes( "  " )
//  n-1 will be string value , n value will be null ( \0 )

char strOne[12]="who are you";
char strTwo[8]="?";
void main()
{
	printf("%s %s\n",strOne,strTwo );
	puts(strOne);
	puts(strTwo);
}

