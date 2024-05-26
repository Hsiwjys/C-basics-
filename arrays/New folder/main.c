#include <stdio.h>
void FindingMininumAndMaximum(int naan,int iop,int asd[]);
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int i;
    int mass[n];

    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &mass[i]);
    }
    FindingMininumAndMaximum(n,i,mass);
    return 0;
}
void FindingMininumAndMaximum(int naan,int iop,int asd[])
{
	 int mass = asd[0];
     int joker = asd[0];

    for ( iop = 0; iop < naan; iop++) 	
   {
        if (asd[iop] > joker) 
		{
            joker = asd[iop];
        } 
		else if (asd[iop] < mass) 
		{
            mass = asd[iop];
        }
    }

    printf("Maximum value: %d\n", joker);
    printf("Minimum value: %d\n", mass);

}
