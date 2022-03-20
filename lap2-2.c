#include <stdio.h>
int main()
{
{
    printf("[-----[Seo han bit]   [2019038043]-----]\n");
    
    int i;
    int *ptr;
    int **dptr;

    i = 1234;

    printf("[checking values before ptr = &i] \n");     
    printf("value of i == %d\n", i);                    //i의 값을 출력
    printf("address of i == %p\n", &i);                 //i의 주소를 출력
    printf("value of ptr == %p\n", ptr);                //변수 ptr의 값을 출력
    printf("address of ptr == %p\n", &ptr);             //변수 ptr의 주소를 출력

    ptr = &i;                                           //변수 ptr에 i의 주소를 입력

    printf("\n[checking values after ptr = &i] \n");    
    printf("value of i == %d\n", i);                    //i의 값을 출력
    printf("address of i == %p\n", &i);                 //i의 주소를 출력
    printf("value of ptr == %p\n", ptr);                //변수 ptr의 값을 출력
    printf("address of ptr == %p\n", &ptr);             //변수 ptr의 주소를 출력
    printf("value of *ptr == %d\n", *ptr);              //역참조를 통해 ptr변수에 들어있는 i의 주소 안에 있는 값을 출력

    dptr = &ptr;                                        //이중 포인터 변수 dptr에 포인터 변수 ptr의 주소를 입력

    printf("\n[checking values after dptr = &ptr] \n"); 
    printf("value of i == %d\n", i);                    //i의 값을 출력
    printf("address of i == %p\n", &i);                 //i의 주소를 출력
    printf("value of ptr == %p\n", ptr);                //변수 ptr의 값을 출력
    printf("address of ptr == %p\n", &ptr);             //변수 ptr의 주소를 출력
    printf("value of *ptr == %d\n", *ptr);              //역참조를 통해 ptr변수에 들어있는 i의 주소 안에 있는 값을 출력
    printf("value of dptr == %p\n", dptr);              //변수 dptr의 값을 출력
    printf("address of dptr == %p\n", &dptr);            //변수 dptr의 주소를 출력
    printf("value of *dptr == %p\n", *dptr);            //dptr에 들어있는 ptr의 주소를 역참조하여 ptr의 값을 출력
    printf("value of **dptr == %d\n", **dptr);          //두번 역참조하여 dptr에 있는 주소로 ptr로 가서 ptr에 있는 i의 주소에 있는 값을 출력

    *ptr = 7777;                                        //*ptr의 값을 7777로 초기화

    printf("\n[after *ptr = 7777] \n");                 
    printf("value of i == %d\n", i);                    //i의 값을 출력하는데 *ptr이 i의 값을 의미했기때문에 i의 값도 7777로 바뀜
    printf("value of *ptr == %d\n", *ptr);              //*ptr의 값을 출력
    printf("value of **dptr == %d\n", **dptr);          //**dptr 또한 i의 값을 의미하기 때문에 7777로 출력

    **dptr = 8888;                                      //**dptr의 값을 8888로 초기화

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);                    //**dptr 또한 주소를 타고타고 가서 i의 값을 의미했기 때문에 **dptr값이 바뀌면 i의 값도 바뀜
    printf("value of *ptr == %d\n", *ptr);              //*ptr의 값을 출력
    printf("value of **dptr == %d\n", **dptr);          //**dptr의 값을 출력

    return 0;                                           //함수 종료
}   