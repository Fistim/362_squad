#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main (void)
{setlocale(LC_ALL,"rus");
int a=1, n, i, sum=0, k, P;
    printf("������� ����� ��� ����������: ");  scanf("%d", &n);
	for(i=1; i<=n; i++) {  a=a*i; }
	printf("��������� ����� %d �����: %d", n, a);
	for(i=0;i<=n;i++){  sum += n; } k=sum/2;
	printf("\n�����: %d", k);
	P=a/k; printf ("\n�����: %d", P);
	return 0;
}
