#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void main(void) {
	char s1[1] = { 0 };
	char s2[1] = { 0 };

	do {
		printf("-10000�`10000�܂ł̐��������͂��ĉ�����\n");
		scanf("%s %s", &(s1[0]), &(s2[0]));		/* ���������� */
	} while (atoi(s1) < -10000 || atoi(s1)>10000 || atoi(s2) < -10000 || atoi(s2)>10000);	/* -10000�`10000�͈̔͊O�Ȃ�ēx���� */
	printf("%d", atoi(s1) + atoi(s2));			/* ��̐����̘a���o�� */

	return;
}

/*
void main(void) {
short h1 = 0;
short h2 = 0;

do {
printf("-10000�`10000�܂ł̐��������͂��ĉ�����\n");
scanf("%hd %hd", &h1, &h2);
} while (h1 < -10000 || h1>10000 || h2 < -10000 || h2>10000);

printf("%d", h1 + h2);
return;
}
*/