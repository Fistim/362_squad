#include<stdio.h>
#include<math.h>
#include<locale.h> 
int main()
{
	setlocale(LC_ALL,"rus");
    int x0, y0, r, x1, y1, a, b;
    printf("���������� ������ x: "); scanf("%d", &x0);
    printf("���������� ������ y: "); scanf("%d", &y0);
    printf("������: "); scanf("%d", &r);
    printf("X: "); scanf("%d", &x1);
    printf("Y: "); scanf("%d", &y1);
    a = (x0-x1);    
    b = (y0-y1);
    if(pow(a,2)+pow(b,2)<=pow(r,2)) 
	printf("�����������.\n");
    else 
	printf("�� �����������.\n");
    return 0;
}
