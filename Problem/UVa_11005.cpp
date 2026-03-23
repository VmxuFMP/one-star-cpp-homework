#include <stdio.h>
#pragma warning (disable: 4996)

int get_cost(int n, int base, int costs[]) {
	if (n == 0) return costs[0];
	int total = 0;
	while (n > 0) {
		total += costs[n % base]; //取得該位數的成本
		n /= base; //移位
	}
	return total;
}

int main() {
	int cases, t;
	scanf("%d", &cases);

	for (int t = 1; t <= cases; t++) {
		int costs[36];
		for (int i = 0; i < 36; i++) {
			scanf("%d", &costs[i]);
		}

		int num_queries, query_val;
		scanf("%d", &num_queries);

		if (t > 1) printf("\n");
		printf("Case %d:\n", t);

		while (num_queries--) {
			scanf("%d", &query_val);
			int min_cost = 2147483647;
			int base_costs[37];

			//先算出每個進位的成本，並找出最小值
			for (int b = 2; b <= 36; b++) {
				base_costs[b] = get_cost(query_val, b, costs);
				if (base_costs[b] < min_cost) {
					min_cost = base_costs[b];
				}
			}
			//輸出所有等於最小成本的進位
			printf("Cheapest base(s) for number %d:", query_val);
			for (int b = 2; b <= 36; b++) {
				if (base_costs[b] == min_cost) {
					printf(" %d", b);
				}
			}
			printf("\n");
		}
	}
	return 0;
}

/*

* UVa 11005 題目 *
 
When printing text on paper we need ink. But not every character needs the same amount of ink to
print: letters such as ’W’, ’M’ and ’8’ are more expensive than thinner letters as ’i’, ’c’ and ’1’. In this
problem we will evaluate the cost of printing numbers in several bases.
As you know, numbers can be expressed in several different bases. Well known bases are binary (base
2; digits 0 and 1), decimal (base 10; digits 0 to 9) and hexadecimal (base 16; digits 0 to 9 and letters A
to F). For the general base n we will use the first n characters of the string “0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ”, which means the highest base in this problem is 36. The lowest base is
of course 2.
Every character from this string has an associated cost, represented by an integer value between 1
and 128. The cost to print a number in a certain base is the sum of the costs of all characters needed
to represent that number. For the numbers given in the input, you will have to calculate the cheapest
base(s) to represent this number in. Numbers in any base are printed without leading zeros.

輸入說明：
The input has less than 25 test cases. The first line of input file denotes this number of test cases. The
description of every test case is given below:
The first 4 lines of every case contain 9 integers each: the costs of the 36 characters in the order
given above. Then follows the number of queries on a line by itself. Every query appears on a line by
itself and is formed by a number between 0 and 2000000000 in decimal format.

輸出說明：
For every case in the input, print one line ‘Case X:’, without the quotes, where X is the case number
starting from 1.
For every query within a case print one line ‘Cheapest base(s) for number Y :’ followed by the
cheapest base(s) in increasing order, separated by one space. Y is the query in decimal format. Print
a blank line between cases.
The numbers in the second sample output are actually all in one line just like the first sample
output. Due to lack of horizontal space they are shown broken in two lines.

*/
