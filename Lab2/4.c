/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{	
	#define SIZE 100
	int n, m;
	
	
	printf("n = "); scanf_s("%d", &n);
	printf("m = "); scanf_s("%d", &m);
	
	
	if (n <= 0 || n > SIZE || m <= 0 || m > SIZE)
	{
		printf("n and / or m out of range!\n");
		return(0);
	}
	
	
	int matrix[SIZE][SIZE], min, max, min_c, max_c;
	
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			//matrix[i][j]=i+j;
			//printf("\nmatrix[%d][%d]= %d ", i, j, matrix[i][j]);
			
			//Entering the matrix using the keyboard
			printf("[%d][%d]= ", i, j); scanf("%d", &matrix[i][j]); //enter an element of each column in a single row
			
			//Search for columns with the minimum and maximum element
			if (i == 0 && j == 0)
			{
				min = matrix[i][j];
				min_c = 0;
				max = matrix[i][j];
				max_c = 0;
			}
			else
			{
				if (matrix[i][j] < min) 
				{
					min = matrix[i][j];
					min_c = j;
				}
				if (matrix[i][j] > max)
				{
					max = matrix[i][j];
					max_c = j;
				}
			}
		}
	}
	
	
	//printf("\nmin = %d\n", min_c);	//column with the minimum element
	//printf("max = %d\n", max_c);	//column with the maximum element
	
	float a[SIZE];
	
	
	if(max != min)
	{
		for (int i = 0; i < n ; i++)
		{
			if(matrix[i][min_c] == max )
			{	
				printf("\nThe minimum and maximum elements are in the same column");
				return(0);
			}
		}
	}
	
	
	if(min_c == max_c)
	{
		printf("\nAll elements in the matrix are equal");
		return(0);
	}
	
	
	if (abs(max_c-min_c) == 1)
	{
		printf("There are no columns between the maximum and minimum element");
		return(0);
	}
	
	
	if (min_c < max_c)
	{
		int k = 0;
		for(int i = min_c+1; i < max_c; i++)
		{	
			float a_mean = 0;
		
			for(int j = 0; j < n; j++)
			{
				a_mean += matrix[j][i]; 
			}
		
			a[k] = a_mean/n;
			k++;
		}
	}
	else
	{
		int k = min_c-max_c-2;
		for(int i = min_c-max_c-1 ; i > max_c; i--)
		{	
			float a_mean = 0;
			for(int j = 0 ; j < n  ; j++)
			{
				a_mean += matrix[j][i]; 
			}
			a[k] = a_mean/n;
			k--;
		}
		
	}
	
	
	//Array output
	printf("\na = ");
	for(int i = 0; i < abs(max_c-min_c)-1; i++)
	{	
		printf("%f ", a[i]);
	}
	
	
	return(0);
}
*/
