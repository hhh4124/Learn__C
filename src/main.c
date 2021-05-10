#include <stdio.h>

/* 
#include는 전처리기를 의미.
컴파일 전에 미리 처리해야하는 명령어를 나타냄

<stdio.h>, .h로 끝나는 것은 헤더 파일을 나타냄
이미 만들어져 있는 함수가 있는 목차
헤더 파일을 추가하면 전처리기를 통해 .h 파일의 기능을 가져올 수 있음.
stio.h 는 입력문, 반복문, 조건문 등을 사용할 수 있게 함

return은 함수가 끝남을 나타내며 0값은 정상적으로 끝남을 의미
*/

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
/*
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
*/
// 4. If 조건문 사용해보고 출력해보기
/*
int main()
{
	int numb;
	printf("정수를 입력하세요. : ");
	scanf("%d", &numb);
	
	if (numb > 0)
	{
		printf("양수입니다.\n");
	}
	else if (numb < 0)
	{
		printf("음수입니다.\n");	
	}
	else 
	{
		printf("0입니다. \n");
	}
	
	return 0;
}
*/
int main()
{
	
}