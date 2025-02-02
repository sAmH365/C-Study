#include <stdio.h>

int main(void) {

    char szName[32] = { 0 };
    char strs[10] = {2};

    printf("이름을 입력하세요: ");
    gets(szName);

    printf("당신의 이름은 : ");
    puts(szName);
    puts("입니다.");

    return 0;
}