#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[105][105];
    int row_count = 0;
    int max_len = 0;

    //memset(input, 0, sizeof(input));
    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            input[i][j] = '\0'; 
        }
    }

    while (fgets(input[row_count], 105, stdin)) {
        int len = strlen(input[row_count]);

        // 處理換行符號：直接拔掉它，不要變換成空格
        if (input[row_count][len - 1] == '\n') {
            input[row_count][len - 1] = '\0';
            len--;
        }

        if (len > max_len) {
            max_len = len;
        }
        row_count++;
    }

    for (int i = 0; i < max_len; i++) {
        for (int j = row_count - 1; j >= 0; j--) {
            // 如果該位置是結束符號或是空的，輸出空格補齊
            if (input[j][i] == '\0' || input[j][i] == '\n') {
                putchar(' ');
            }
            else {
                putchar(input[j][i]);
            }
        }
        putchar('\n');
    }

    return 0;
}

/*

* UVa 490 題目 *

在這個問題中你必須將數列文字往順時針方向旋轉90度。也就是說將原本由左到右，由上到下的句子輸出成由上到下，由右到左。

輸入說明：輸入最多不會超過100列，每列最多不會超過100個字元。 合法的字元包括：換行，空白，所有的標點符號，數字，以及大小寫字母。（注意：Tabs並不算是合法字元。)
輸出說明：最後一列輸入必須垂直輸出在最左邊一行，輸入的第一列必須垂直輸出在最右邊一行。 

*/