// array basics
#include<stdio.h> 
#define N 10
void main()
{
	/* Length of an array can be specified
	by */
	int ara[5];
	int arb[5+5];
	int arc[5*5];
	int ard[10/5]; // declaration of array 
	// initializing 1D Array
	int ari[5]={0,1,2,3,4};  //  method 1
	int are[]={0,1,2,3,4};   //  method 2
	ara[0]=0;            //  method 3
	ara[1]=1;
	ara[2]=2;
	ara[3]=3;
	ara[4]=4;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&ara[i]);   //method 4 or another method both are same
	}
	
	
	/* if element of an array is less than length specified
	remain will be filled with a value 0 */
	
	//example 
	
	int ary[10]={0,1,2,3,4,5}; // another 4 elements will be 0
	int arf[10]={0};     // method 4 by using length specified , another 9 elements will be 0
	// arf[10]={};      //it is wrong method to specified.
	//int arg[3]={0,1,2,3};   // not allowed due to index value.
	
	// Designated intialization , Also called designator
	
	int arh[10]={[0]=1,[3]=5,[7]=4};
	int arj[]={[4]=23,[19]=45,[29]=67};  /* length of array is 30 due
	to 29 is the largest index value */
	int ark[]={45,56,78,[5]=89,90}; 
	
	// initialize two dimensional array 
	int arl[2][3]={12,23,34,45,56,67};
	//another method 
	int arm[2][3]={{78,89,90},{10,20,30}};
	// print value of two dimensional array
	
	int j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arm[i][j]);
		}
	}
}
