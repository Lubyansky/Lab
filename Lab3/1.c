#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) 
{	
	setlocale(LC_ALL, "RUS");
	FILE *input, *output;
	int v = 0, sum = 0, size = 10, len = 0;	//������� �����, ����� ��������� �����, ������ �������, ���������� ��������� �����
	float *a = (float *) malloc(size * sizeof(float));

	
	if ((input = fopen("INPUT.txt", "r")) == NULL)
	{
		printf("�� ������� ������� ���� input.txt");
    	return 0;
  	}
  
  	else if (fscanf(input, "%i", &v) == EOF)
  	{
		printf("���� ����");
    	return 0;
  	}
	else
	{
		a[len++] = v;
		while (fscanf(input, "%i", &v) != EOF)
  		{	
  			if (len == size)
  			{
  				size *= 2;
  				a = (float*) realloc(a, size * sizeof(float));
  			
			}
			a[len++] = v;

		}
	}
  	
  	
  	printf("a = ");
	for(int i = 0; i < len; i++)
	{	sum += a[i];
		printf("%f ", a[i]);
	}
	

  	free(a);
  
  	
  	output = fopen("OUTPUT.txt", "w");
  	fprintf(output, "������� �������������� = %f", (float)sum/len);
  	

  	fclose(input);
  	fclose(output);
  	
  	
  	return 0;
}




