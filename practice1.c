#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void main(void) {
	char s1[1] = { 0 };
	char s2[1] = { 0 };

	do {
		printf("-10000`10000‚Ü‚Å‚Ì®”‚ğ“ñ‚Â“ü—Í‚µ‚Ä‰º‚³‚¢\n");
		scanf("%s %s", &(s1[0]), &(s2[0]));		/* ®”‚ğ“ñ‚Â“ü—Í */
	} while (atoi(s1) < -10000 || atoi(s1)>10000 || atoi(s2) < -10000 || atoi(s2)>10000);	/* -10000`10000‚Ì”ÍˆÍŠO‚È‚çÄ“x“ü—Í */
	printf("%d", atoi(s1) + atoi(s2));			/* “ñ‚Â‚Ì®”‚Ì˜a‚ğo—Í */

	return;
}

/*
void main(void) {
short h1 = 0;
short h2 = 0;

do {
printf("-10000`10000‚Ü‚Å‚Ì®”‚ğ“ñ‚Â“ü—Í‚µ‚Ä‰º‚³‚¢\n");
scanf("%hd %hd", &h1, &h2);
} while (h1 < -10000 || h1>10000 || h2 < -10000 || h2>10000);

printf("%d", h1 + h2);
return;
}
*/