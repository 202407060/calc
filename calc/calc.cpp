#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "dive.h"
#include "mod.h"

int main() {
    int x = 0, y = 0;

    printf("ù��° ���� �Է��ϼ���: ");
    scanf("%d", &x);
    printf("�ι�° ���� �Է��ϼ���: ");
    scanf("%d", &y);

	printf("x = %d y = %d\n", x, y);

    printf("%d + %d = %d\n", x, y, sum(x, y));
    printf("%d - %d = %d\n", x, y, min(x, y));
    printf("%d x %d = %d\n", x, y, mul(x, y));
    printf("%d �� %d = %d\n", x, y, div(x, y));
	printf("%d %% %d = %d\n", x, y, mod(x, y));

    return 0;
}