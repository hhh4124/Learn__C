#include <stdio.h>

// 1. Hello World 출력하기!
/*
int main()
{
printf("Hello World!\n");

return 0;
}
*/
	
// 2. 변수값 할당 해보고 출력해보기
/*
int main()
{
	int num1;
	int num2;
	int num3;
	
	num1 = 10;
	num2 = 20;
	num3 = 30;
	
	printf("%d\n%d\n%d\n", num1, num2, num3);
	
	return 0;
}
*/

// 3. For 반복문 써보고 출력해보기
int main()
{
	int i;
	int sum = 0;
	
	for (i=1; i<=50; i=i+1)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	
	return 0;
	
}