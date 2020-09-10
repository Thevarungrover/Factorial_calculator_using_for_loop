#include<stdio.h>
main() // main function
{
	int a,num,fact=1; // declaration of variables
	printf("Enter any positive number to get its factorial :");
	scanf("%d",&a); //getting a number  
	num=a; // storing input value in another variable for output
	for(;a>=1;a--) // for loop
	{
		fact=a*fact;
	}
	printf("\nFactorial of %d is %d,",num,fact); // printing required output 
}
