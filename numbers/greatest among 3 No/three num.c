//Greatest among two numbers:

//Input: A = 5, B = 7, C = 8

//code 1:
    
#include<stdio.h> 
int main() 
{ 
    int A, B, C; 
    printf("Enter the numbers A, B and C: "); 
    scanf("%d %d %d", &A, &B, &C); 
    if (A >= B && A >= C) 
        printf("%d is the largest number.", A); 
    if (B >= A && B >= C) 
        printf("%d is the largest number.", B); 
    if (C >= A && C >= B) 
        printf("%d is the largest number.", C); 
    return 0; 
} 

//code 2:

/*#include <stdio.h> 
int main() 
{ 
    int A, B, C; 
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &A, &B, &C); 
    if (A >= B) { 
        if (A >= C) 
            printf("%d is the largest number.", A); 
        else
            printf("%d is the largest number.", C); 
    } 
    else { 
        if (B >= C) 
            printf("%d is the largest number.", B); 
        else
            printf("%d is the largest number.", C); 
    } 
    return 0; 
} 

//code 3:

#include <stdio.h> 
int main() 
{ 
    int A, B, C; 
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &A, &B, &C); 
    if (A >= B && A >= C) 
        printf("%d is the largest number.", A); 
    else if (B >= A && B >= C) 
        printf("%d is the largest number.", B); 
    else
        printf("%d is the largest number.", C); 
    return 0; 
} 

//code 4:

#include <stdio.h> 
int main() 
{ 
    int A, B, C, largest; 
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &A, &B, &C); 
    largest = A > B ? (A > C ? A : C) : (B > C ? B : C); 
    printf("%d is the largest number.", largest); 
     return 0; 
} */
