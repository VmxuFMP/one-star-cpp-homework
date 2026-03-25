#include <stdio.h>
#include <string.h>
#pragma warning (disable: 4996)

void bangla(long long n) {
	if (n >= 10000000) { // kuti
		bangla(n / 10000000);
		printf(" kuti");
		n %= 10000000;
	}
	if (n >= 100000) { // lakh
		bangla(n / 100000);
		printf(" lakh");
		n %= 100000;
	}
	if (n >= 1000) { // hajar
		bangla(n / 1000);
		printf(" hajar");
		n %= 1000;
	}
	if (n >= 100) { //shata
		bangla(n / 100);
		printf(" shata");
		n %= 100;
	}
	if (n > 0 || (n == 0 && n == -1)) {
		if (n > 0) printf(" %lld", n);
	}
}

int main() {
	 long long c;
	 int caseNum = 1;

	 while (scanf("%lld", &c) != EOF) {
		 printf("%4d.", caseNum++);
		 if (c == 0) {
			 printf(" 0");
		 }
		 else {
			 bangla(c);
		 }
		 printf("\n");
	 }
	 return 0;
}

/*

* UVa 10101 題目 *

Bangla numbers normally use 'kuti' (10000000), 'lakh' (100000), 'hajar' (1000), 'shata' (100) while expanding and converting to text. You are going to write a program to convert a given number to text with them.

輸入說明：The input file may contain several test cases. Each case will contain a non-negative number <= 999999999999999.
輸出說明：For each case of input, you have to output a line starting with the case number with four digits adjustment followed by the converted text.

*/
