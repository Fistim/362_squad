#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

main()
{	setlocale(LC_ALL, "rus");
	int a, k; 
	printf("������� A: \n");
	scanf("%d", &a);
	k=fmod(a, 7); 
	switch(k%7)
	{
		case 0:
			printf("�����������");
			break;
		case 1:
			printf("�����������"); 
			break; 
		case 2:
			printf("�������");
			break;
		case 3:
			printf("�����"); 
			break;
		case 4:
			printf("�������"); 
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������"); 
			break;
	}
	getch();
}
