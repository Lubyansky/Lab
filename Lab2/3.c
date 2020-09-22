/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{	
	#define SIZE 100
	int n;

		
	printf("n = ");
	scanf_s("%d", &n);
	
	
	if (n <= 0 || n > SIZE-2)
	{
		printf("N out of range!\n");
		return(0);
	}
	
	
	int a[SIZE] = {1, -8 ,5, -7 ,5 ,7, 4, -8, 8, -8}; // n = 10
	//int a[SIZE] = {0, 0, 0, 0};
	//int a[SIZE] = {1, 1, 1, 1};
	//int a[SIZE] = {10, 15 ,40, -40 ,7 ,8, 3, 40, -40, -8};	// n = 10
	int max = a[0];
	
	
	//Output of the original array
	printf("a = ");
	for(int i = 0; i < n; i++)
	{	
		printf("%d ", a[i]);
	}
	printf("\n");
	
	
	//Finding the maximum value
	for(int i = 0; i < n; i++)
	{
		if (max < a[i]) max = a[i];
	} 


	//The output of the maximum value
	printf("max = %d\n", max);
	
	
	//Replacing values equal to the maximum modulus
	int k = 0;	//number of deleted items
	int sum = 0;	//the amount of deleted items
	for(int i = 0; i < n; i++)
	{
		while (abs(a[i]) == max && k != n)
		{
			sum += a[i];
			k++;
			for(int j = i; j < n; j++)
			{	
				a[j] = a[j+1];
			
			}
		
		}
	
	}
	if(k == n)
	{
		printf("All elements in the array have the same value\n");
		return(0);
	}
	
	
	//Output the number of deleted items
	printf("k = %d\n", k);
	printf("sum = %d\n", sum);
	
	
	//Inserting the sum of deleted items in the middle
	if((n-k) % 2 == 0)
	{
		for(int i = 1; i <= (n-k)/2; i++) 
		{
			a[n-k-i+1] = a[n-k-i];
		}
		a[(n-k+2)/2-1] = sum;
		//a[(n-k+2)/2] = sum;//one more element of the parity array
		k -= 1;
		//k -= 2;
		
	}
	
	
	//Output of the final array
	printf("a = ");
	for(int i = 0; i < n-k; i++)
	{	
		printf("%d ", a[i]);
	}


	return(0);
}
*/
