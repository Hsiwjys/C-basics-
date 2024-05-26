//functions basics
#include<stdio.h>

//declearation of fuction
//syntax :  datatype functionName(parameters);
void example(int mass, int suma);
int  mcu(int pass, int fail);// we can use n no. of parameter.

 // Function definition
 /*  syntax
 datatype functionName(parameters)
 {
 	statements
 }
 */
 void example(int mass, int suma)
 {
 	printf("%d",mass+suma);
 }


 // Function call
 //syntax :  FunctionName(parameters values);

 void main()
 {
 	int mass=45;
	int suma=89;
	example(45,89);
	door(45,89);
 }

 // static function


