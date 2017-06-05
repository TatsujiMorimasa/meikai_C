#include <stdio.h>
#include <stdlib.h>

int main(){
	int hum;
	int com;
	int judge;
	int retry;

	printf("ジャンケンゲーム開始！\n");

	do {
	com = rand() % 3;

		do {
			printf("\n\aジャンケンポン！…(0)グー (1)チョキ (2)パー：");
			scanf("%d", &hum);
		}while(hum < 0 || hum > 2);

		printf("私は");

		switch(com){
			case 0:
				printf("グー");
			break;
			case 1:
				printf("チョキ");
			break;
			case 2:
				printf("パー");
			break;
		}

		printf("で、あなたは");

		switch(hum){
			case 0:
				printf("グー");
			break;
			case 1:
				printf("チョキ");
			break;
			case 2:
				printf("パー");
			break;
		}

	printf("です。\n");

	judge = (hum - com + 3) % 3;

	switch(judge){
		case 0:
			puts("引き分けです");
			break;
		case 1:
			puts("あなたの負けです。");
			break;
		case 2:
			puts("あなたの勝ちです！");
			break;
		}

	printf("もう一度しますか？…(0)いいえ (1)はい：");
	scanf("%d", &retry);

	}while(retry == 1 );

	return 0;
}
