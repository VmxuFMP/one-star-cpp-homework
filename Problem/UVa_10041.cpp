#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

int compare(const void* a, const void* b) {
	int x = *(int*)a;
	int y = *(int*)b;
	return x - y;
}

int main() {
	int n;
	int relation[500];
	if (scanf("%d", &n) != 1) return 0;

	for (int i = 0; i < n; i++) {
		int r;
		if(scanf("%d", &r) != 1) return 0;

		for (int j = 0; j < r; j++) {
			scanf("%d", &relation[j]);
		}

		qsort(relation, r, sizeof(int), compare);

		int total_distance = 0;
		int vito_home = relation[r / 2];
		for (int i = 0; i < r; i++) {
			total_distance = total_distance + abs(relation[i] - vito_home);
		}

		printf("%d\n", total_distance);
	}
	return 0;
}

/*

* UVa 10041 題目 *

世界聞名的黑社會老大Vito Deadstone要搬到紐約來了。在那裡他有一個大家族，並且他們都住在Lamafia大道上。因為Vito時常要拜訪所有的親戚，他想要找一間離他們最近的房子，也就是說他希望從他的家到所有的親戚的家的距離的和為最小。
他恐嚇你寫一個程式來幫助幫助他解決這個問題。

輸入說明：輸入的第一列有一個整數代表以下有多少組測試資料。每組測試資料一列，第一個整數 r（0 < r < 500），代表他親戚的數目。接下來的r個整數s1,s2,......sr為這些親戚房子的門牌號碼（0 < si <30000）。注意：有些親戚的門牌號碼會相同。
輸出說明：對每一組測試資料，輸出從他的新家到所有的親戚的家的距離的和為最小為多少。2個門牌號碼si、sj的距離為si-sj的絕對值。

*/
