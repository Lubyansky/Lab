/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{	
	setlocale(LC_ALL, "RUS");
	#define SIZE 100
	int n;

		
	printf("n = ");
	scanf_s("%d", &n);
	
	
	if (n <= 0 || n > SIZE-2)
	{
		printf("N вне диапазона!\n");
		return(0);
	}
	
	
	int a[SIZE] = {1, -8 ,5, -7 ,5 ,7, 4, -8, 8, -8}; // n = 10
	//int a[SIZE] = {0, 0, 0, 0};
	//int a[SIZE] = {1, 1, 1, 1};
	//int a[SIZE] = {10, 15 ,40, -40 ,7 ,8, 3, 40, -40, -8};	// n = 10
	int max = a[0];
	
	
	//Вывод первоначального массива
	printf("a = ");
	for(int i = 0; i < n; i++)
	{	
		printf("%d ", a[i]);
	}
	printf("\n");
	
	
	//Поиск максимального значения
	for(int i = 0; i < n; i++)
	{
		if (max < a[i]) max = a[i];
	} 


	//Вывод максимального значения
	printf("max = %d\n", max);
	
	
	//Замена значений равных по модулю максимальному
	int k = 0;	//число удалённых элементов
	int sum = 0;	//сумма удалённых элементов
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
		printf("Все элементы в массиве имеют одно значение\n");
		return(0);
	}
	
	
	//Вывод количества удалённых элементов
	printf("k = %d\n", k);
	printf("sum = %d\n", sum);
	
	
	//Вставка в середину суммы удалённых элементов
	if((n-k) % 2 == 0)
	{
		for(int i = 1; i <= (n-k)/2; i++) 
		{
			a[n-k-i+1] = a[n-k-i];
		}
		a[(n-k+2)/2-1] = sum;
		//a[(n-k+2)/2] = sum;//ещё один элемент для чётности массива
		k -= 1;
		//k -= 2;
		
	}
	
	
	//Вывод конечного массива
	printf("a = ");
	for(int i = 0; i < n-k; i++)
	{	
		printf("%d ", a[i]);
	}


	return(0);
}
*/
