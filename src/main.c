#include <stdio.h>
#include <limits.h>
#include <stdint.h>

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
/*
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
*/

// 6. 자료형 크기 구하기. size of 명령어
// 아마 맥북 64bit라 long은 8byte인거 같다.
/*
int main()
{
	int num1 = 0;
	long num2 = 0;
	long long num3 = 0;
	char num4 = 0;
	short num5 = 0;
	int size;
	
	size = sizeof num1;
	printf("사이즈: %d\n", size);
	
	size = sizeof num2;
	printf("사이즈: %d\n", size);
	
	size = sizeof num3;
	printf("사이즈: %d\n", size);
	
	size = sizeof num4;
	printf("사이즈: %d\n", size);
	
	size = sizeof num5;
	printf("사이즈: %d\n", size);
	
	return 0;
}
*/

// 7. 자료형의 최솟값, 최댓값, 오버플로우, 언더플로우 
// #include <limis.h>가 필요
// 언뜻보면 오버플로우 문제는 발생하기 힘들 것 같지만, 
// 게임, 유튜브 처럼 대규모 인원이 장기간 사용하는 경우 오버플로우가 가끔 발생함.
// 실제 유튜브에서도 조회수가 21억을 초과하여 음수로 나온 오류가 있었음.
/*
int main()
{
    char num1 = CHAR_MIN;          // char의 최솟값
    short num2 = SHRT_MIN;         // short의 최솟값
    int num3 = INT_MIN;            // int의 최솟값
    long num4 = LONG_MIN;          // long의 최솟값
    long long num5 = LLONG_MIN;    // long long의 최솟값

    // char, short, int는 %d로 출력하고 long은 %ld로 출력, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // -128 -32768 -2147483648 -2147483648 -9223372036854775808

	num1 = CHAR_MIN - 1;          // char의 최솟값 -1 => 언더플로우 발생 = 최댓값
    num2 = SHRT_MIN - 1;         // short의 최솟값 -1 => 언더플로우 발생 = 최댓값
    num3 = INT_MIN - 1;            // int의 최솟값 -1 => 언더플로우 발생 = 최댓값
    num4 = LONG_MIN - 1;          // long의 최솟값 -1 => 언더플로우 발생 = 최댓값
    num5 = LLONG_MIN - 1;    // long long의 최솟값 -1 => 언더플로우 발생 = 최댓값
	
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	
	char num6 = CHAR_MAX;          // char의 최댓값
    short num7 = SHRT_MAX;         // short의 최댓값
    int num8 = INT_MAX;            // int의 최댓값
    long num9 = LONG_MAX;    // long long의 최댓값
	
	printf("%d %d %d %ld\n", num6, num7, num8, num9);
	
	
	num6 = CHAR_MAX + 1;          // char의 최댓값보다 큰 수를 할당. 오버플로우 발생
    num7 = SHRT_MAX + 1;         // short의 최댓값보다 큰 수를 할당. 오버플로우 발생
    num8 = INT_MAX + 1;            // int의 최댓값보다 큰 수를 할당. 오버플로우 발생
    num9 = LONG_MAX + 1;    // long long의 최댓값보다 큰 수를 할당. 오버플로우 발생
	
	printf("%d %d %d %ld\n", num6, num7, num8, num9);
	
    return 0;
}
*/

// 8. stdint 사용하여 비트 단위로 표시하기
// 운영체제별로 int, long 등이 바뀌고 모호해지니 비트를 숫자로 표기하는 stdint 사용해보기
// 최솟값, 최댓값도 사용 가능.
// 부호 있는 정수(signed) 최솟값: INT8_MIN, INT16_MIN, INT32_MIN, INT64_MIN
// 부호 있는 정수 최댓값: INT8_MAX, INT16_MAX, INT32_MAX, INT64_MAX
// 부호 없는 정수(unsigned) 최솟값: 0
// 부호 없는 정수 최댓값: UINT8_MAX, UINT16_MAX, UINT32_MAX, UINT64_MAX
/*
int main()
{
    int8_t num1 = -128;                    // 8비트(1바이트) 크기의 부호 있는 정수형 변수 선언
    int16_t num2 = 32767;                  // 16비트(2바이트) 크기의 부호 있는 정수형 변수 선언 
    int32_t num3 = 2147483647;             // 32비트(4바이트) 크기의 부호 있는 정수형 변수 선언
    int64_t num4 = 9223372036854775807;    // 64비트(8바이트) 크기의 부호 있는 정수형 변수 선언

    // int8_t, int16_t, int32_t는 %d로 출력하고 int64_t는 %lld로 출력
    printf("%d %d %d %lld\n", num1, num2, num3, num4); // -128 32767 2147483647 9223372036854775807

    uint8_t num5 = 255;                      // 8비트(1바이트) 크기의 부호 없는 정수형 변수 선언
    uint16_t num6 = 65535;                   // 16비트(2바이트) 크기의 부호 없는 정수형 변수 선언
    uint32_t num7 = 4294967295;              // 32비트(4바이트) 크기의 부호 없는 정수형 변수 선언
    uint64_t num8 = 18446744073709551615;    // 64비트(8바이트) 크기의 부호 없는 정수형 변수 선언

    // uint8_t, uint16_t, uint32_t는 %u로 출력하고 uint64_t는 %llu로 출력
    printf("%u %u %u %llu\n", num5, num6, num7, num8); // 255 65535 4294967295 18446744073709551615

    return 0;
}
*/

// 9. 실수형 변수 저장하기
/*
int main()
{
    float num1 = 0.1f;               // 단정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // float는 숫자 뒤에 f를 붙임

    double num2 = 3867.215820;       // 배정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // double은 숫자 뒤에 아무것도 붙이지 않음

    long double num3 = 9.327513l;    // 배정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // long double은 숫자 뒤에 l을 붙임

    // float와 double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3);    // 0.100000 3867.215820 9.327513
	
	num1 = 3.e5f;             // 지수 표기법으로 300000을 표기
                        	  // float는 숫자 뒤에 f를 붙임
 
    num2 = -1.3827e-2;       // 지수 표기법으로 -0.013827을 표기
                             // double은 숫자 뒤에 아무것도 붙이지 않음

    num3 = 5.21e+9l;    	 // 지수 표기법으로 5210000000을 표기
                             // long double은 숫자 뒤에 l을 붙임

    // float와 double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3); // 300000.000000 -0.013827 5210000000.000000

    // 지수 표기법으로 출력할 때는 float와 double은 %e로 출력, long double은 %Le로 출력
    printf("%e %e %Le\n", num1, num2, num3); // 3.000000e+05 -1.382700e-02 5.210000e+09

    return 0;
}
*/
// Switch 문 알아보기. 다수의 상황에서는 If 문 보다 간편하게 처리할 수 있다.
// 안타깝게도 범위는 Visual studio에서는 사용할 수 없다고 한다.
// 그럴 때는 break를 생략해서 여러 케이스를 한번에 처리할 수 있다.
/*
int main()
{
    int num1;

	printf("숫자를 입력하세요: ");
    scanf("%d", &num1);    // 값을 입력받음

    switch (num1)   // num1의 값에 따라 분기
    {
    case 1:         // 1일 때
        printf("1입니다.\n");
        break;
    case 2:         // 2일 때
        printf("2입니다.\n");
        break;
	case 3:     // 3일 때
        printf("3입니다.\n");
        break;
	case 4 ... 100: // 4 ~ 100 범위
        printf("4 ~ 100입니다.\n");
        break;
	case -100 ... -1: // -100 ~ -1 범위
        printf("-100 ~ -1입니다.\n");
        break;
    default:        // 아무 case에도 해당되지 않을 때
        printf("예외입니다.\n");
        break;
    }

    return 0;
}
*/

// While 반복문 알아보기.
/*
int main()
{
    int i = 0;
    while (i < 100)    // i가 100보다 작을 때 반복. 0에서 99까지 증가하면서 100번 반복
    {
        printf("Hello, world!\n");
        i++;           // i를 1씩 증가시킴
    }

    return 0;
}
*/

// While 반복문으로 원하는 횟수만큼 반복하기

int main()
{
	int count;
	
	printf("원하는 반복횟수를 입력하세요:\n");
	scanf("%d", &count);
	
	int i = 0;
	
	while(i < count)
	{
		printf("%d회 반복합니다. 현재 %d회 \n", count, i+1);
		i++;
	}
	return 0;
}

