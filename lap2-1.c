#include <stdio.h>
int main()
{
    printf("[-----[Seo han bit]   [2019038043]-----]\n");

    char charType;     //문자형 변수 charType 선언
    int integerType;   //정수형 변수 integerType 선언
    float floatType;   //실수형 변수 floatType 선언
    double doubleType; //실수형 변수 doubleType 선언

    printf("Size of char: %ld byte\n",sizeof(charType));      //문자형 변수 char의 크기가 몇 byte인지 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType));   //정수형 변수 int의 크기가 몇 byte인지 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType));   //실수형 변수 float의 크기가 몇 byte인지 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //실수형 변수 double의 크기가 몇 byte인지 출력

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));          //자료형 char의 크기가 몇 byte인지 출력
    printf("Size of int: %ld bytes\n",sizeof(int));           //자료형 int의 크기가 몇 byte인지 출력
    printf("Size of float: %ld bytes\n",sizeof(float));       //자료형 float의 크기가 몇 byte인지 출력
    printf("Size of double: %ld bytes\n",sizeof(double));     //자료형 double의 크기가 몇 byte인지 출력

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));        //char형 포인터 변수의 크기가 몇 byte인지 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*));         //int형 포인터 변수의 크기가 몇 byte인지 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*));     //float형 포인터 변수의 크기가 몇 byte인지 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*));   //double형 포인터 변수의 크기가 몇 byte인지 출력

    return 0; //메인 함수 종료

}