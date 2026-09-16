#include <stdio.h>


void value1(int num) {
    num = 100; // 함수 안에서만 100으로 바뀜
}


void value2(int *ptr) {
    *ptr = 100; // 주소를 타고 찾아가서 원본 값을 100으로 바꿈
}

int main() {
    int x = 10;
    
    
    value1(x); //주소 X
    printf("x의 값: %d\n", x); //원본 안 바뀜
    
    value2(&x); //주소 O
    printf("주소를 넘겼을 때 x의 값: %d\n", x); // 원본이 바뀜

    return 0;
}



