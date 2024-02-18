#include<stdio.h>

int main(void) {
    int a;
    
    scanf("%d", &a);
    printf("입력한 정수는 %d입니다.\n", a);

    char name[10];
    printf("이름을 입력하세요: ");
    scanf("%s", name);
    printf("당신의 이름은 %s입니다.\n", name);

    return 0;
}