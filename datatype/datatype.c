#include <stdio.h>
#include <string.h>

int main(void) {

    char ch1 = 'A';
    char ch2 = 65;
    printf("문자 %c의 아스키 코드 값은 %d입니다.\n", ch1, ch1);
    printf("문자 %c의 아스키 코드 값은 %d입니다.\n", ch2, ch2);

    printf("long long 형의 크기 = %d\n", sizeof(long long));

    unsigned int a = 4294967295;
    int b = -1;
    printf("%u, %d\n", a, a);
    printf("%u, %d\n", b, b);

    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;
    long double ldb = 1.234567890123456789;
    printf("%.30f\n", ft);
    printf("%.30lf\n", db);
    printf("%.30Lf\n", ldb);

    char fruit[20] = "apple";
    printf("%s\n", fruit);
    strcpy(fruit, "banana");
    printf("%s\n", fruit);


    return 0;
}