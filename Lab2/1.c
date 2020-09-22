/*
#include <stdio.h>


int main(void)
{	
		
	#define SIZE 100
	int m;

		
	printf("m = ");
	scanf_s("%d", &m);
	
	if (m <= 0 || m > SIZE)
	{
		printf("m out of range!\n");
		return(0);
	}
		
	int n[SIZE];
	float x[SIZE];
	
	
	for (int i = 0; i < m; i++)
	{
		n[i] = i+1;
		printf("%d ", n[i]);
	}
	
	
	printf("\n");
	
	
	for (int i = 0; i < m; i++) 
	{
		float z = i;
		x[i] = z/2;
		printf("%f ", x[i]);	
	}
	
	
	float sum = 0, sum1 = 0;
	
	
	for (int i = 0; i < m; i++) 
	
	{
		sum += n[i] * x[i];
		sum1 += n[i];
	}
	
	
	sum = sum / sum1; 
	printf("\nsum = %f", sum);
	
	
	return(0);
}
*/
