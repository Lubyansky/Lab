/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{	
	setlocale(LC_ALL, "RUS");
	#define SIZE 100
	int n, m;
	
	
	printf("n = "); scanf_s("%d", &n);
	printf("m = "); scanf_s("%d", &m);
	
	
	if (n <= 0 || n > SIZE || m <= 0 || m > SIZE)
	{
		printf("n �/��� m ��� ���������!\n");
		return(0);
	}
	
	
	int matrix[SIZE][SIZE], min, max, min_c, max_c;
	
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			//matrix[i][j]=i+j;
			//printf("\nmatrix[%d][%d]= %d ", i, j, matrix[i][j]);
			
			//���� ������� � ����������
			printf("[%d][%d]= ", i, j); scanf("%d", &matrix[i][j]); //�������� ������� ������� ������� � ����� ������
			
			//����� �������� � ����������� � ������������ ���������
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
	
	
	//printf("\nmin = %d\n", min_c);	//������� � ����������� ���������
	//printf("max = %d\n", max_c);	//������� � ������������ ���������
	
	float a[SIZE];
	
	
	if(max != min)
	{
		for (int i = 0; i < n ; i++)
		{
			if(matrix[i][min_c] == max )
			{	
				printf("\n����������� � ������������ ������� ��������� � ����� �������");
				return(0);
			}
		}
	}
	
	
	if(min_c == max_c)
	{
		printf("\n��� �������� � ������� �����");
		return(0);
	}
	
	
	if (abs(max_c-min_c) == 1)
	{
		printf("����� ������������ � ����������� ��������� ��� ��������");
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
	
	
	//����� �������
	printf("\na = ");
	for(int i = 0; i < abs(max_c-min_c)-1; i++)
	{	
		printf("%f ", a[i]);
	}
	
	
	return(0);
}
*/
