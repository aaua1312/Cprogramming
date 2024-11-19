#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int change(int ch) {
	int changealpha = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + changealpha;
	else if (ch >= 'a' && ch <= 'z')
		ch = ch - changealpha;
	else
		return ch;
}
int main(void) {
	int ch;
	printf("문자를 입력하세요: ");
	while (1) {
		ch = getchar();
		ch = change(ch);
		if (ch == '\n') {
			break;
		}
		putchar(ch);
	}
	return 0;
}