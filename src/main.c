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

// 5. 정수 자료형별 변수 입력 및 출력해보기
// int는 운영체제 bit와 상관없이 4byte
// long은 운영체제 bit에 따라 조금씩 다르다고 한다. C언어 코딩도장 참조
// 그렇지만 최근 컴퓨터 개념인 32bit, 64bit외 다른 하드웨어나 구식 컴퓨터에서는 다를 수 있으니 참조.
// C언어는 오래되었고, 여러가지 하드웨어에서 사용하기 때문에 운영체제 bit에 따라 달라질 수 있다고 한다.
// JAVA언어에서는 long은 8byte 취급.
int main()
{
	char char_number = -10; // 1byte = 8bit = -128 ~ 127
	unsigned char unchar_number = 255; // unsigned -> 음수 X, 0 ~ 256
	short short_number = 30000; // 2byte = 16bit = -32,768 ~ 32,767
	unsigned short unshort_number = 65000; // 0 ~ 65,535
	int int_number = -1234567890; // 4byte = 32bit -2,147,483,648~ 2,147,483,647
	unsigned int unint_number = 4294967290; // 0~4,294,967,295
	long long_number = -1234567890; // 4byte = 32bit -2,147,483,648~ 2,147,483,647
	unsigned unlong_number = 4294967290; // 0~4,294,967,295
	long long longlong_number = 5000000000;//8byte = 64bit -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
	//unsighned long long은 귀찮아서 생략
	
	//char, short, int는 %d, long은 %ld, longlong은 %lld
	//unsigned int 부터는 %u, %lu를 사용하여야 한다고 되어있지만, 그냥 %d로도 정상출력이 됨.
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%ld\n%ld\n%lld\n", 
	char_number, unchar_number, short_number, unshort_number, int_number, unint_number, long_number, unlong_number, longlong_number);
	
	//오버플로우 최댓값을 넘으면 최솟값부터 다시 시작한다.
	char number1 = 128; 
	unsigned char number2 = 256;
	
	printf("%d %d", number1, number2);
		
	return 0;
}