#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main (void)
{setlocale(LC_ALL,"rus");
int n, i, sum=0;
float P, a=1, k;
    printf("������� ����� ��� ����������: ");  scanf("%d", &n);
	for(i=1; i<=n; i++) {  a=a*i; }
	printf("��������� ����� %d �����: %3.2f", n, a);
	for(i=0;i<=n;i++){  sum += n; } k=sum/2;
	printf("\n�����: %3.2f", k);
	P=k/a; printf ("\n�����: %3.3f", P);
	return 0;
}
