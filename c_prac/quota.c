#include <stdio.h>

int main(void){
	printf("文字列リテラルと文字定数について。\n");

	printf("二重引用符");
	putchar('"');
	printf("で囲まれた\"ABC\"は文字リテラルです。\n");

	printf("単一引用符");
	putchar('\'');
	printf("で囲まれた'A'は文字定数です。 \n");

	return 0;
}
