#include<stdio.h>
#define STUDENTS 10
int main()
{
	int score[STUDENTS], i, num = 0;
	float avg;
	
	for(i=0; i<STUDENTS; i++)
	{
		printf("%d���� �л� ���� �Է� : ",i+1);
		scanf("%d", &score[i]);
		sum += score[i];
	}
	for(i=0; i<STUDENTS; i++)
	   prnitf("%d�� �л��� ���� = %\n", i+1, score[i]);
	
	printf("\��ü �л��� ������ �� = %d\n",sum);

	avg = (float)sum/STUDENTS; 
	
	printf("\��ü �л��� ������ ���= % 2.f\n", avg);
		
}
