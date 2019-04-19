#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void main(void) {
	char s1[1] = { 0 };
	char s2[1] = { 0 };

	do {
		printf("-10000〜10000までの整数を二つ入力して下さい\n");
		scanf("%s %s", &(s1[0]), &(s2[0]));		/* 整数を二つ入力 */
	} while (atoi(s1) < -10000 || atoi(s1)>10000 || atoi(s2) < -10000 || atoi(s2)>10000);	/* -10000〜10000の範囲外なら再度入力 */
	printf("%d", atoi(s1) + atoi(s2));			/* 二つの整数の和を出力 */

	return;
}

/*
void main(void) {
short h1 = 0;
short h2 = 0;

do {
printf("-10000〜10000までの整数を二つ入力して下さい\n");
scanf("%hd %hd", &h1, &h2);
} while (h1 < -10000 || h1>10000 || h2 < -10000 || h2>10000);

printf("%d", h1 + h2);
return;
}
*/