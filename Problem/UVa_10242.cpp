#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        double sumX = x1 + x2 + x3 + x4;
        double sumY = y1 + y2 + y3 + y4;
        double cx = 0, cy = 0;

        if (x1 == x3 && y1 == y3) { cx = x1; cy = y1; }
        else if (x1 == x4 && y1 == y4) { cx = x1; cy = y1; }
        else { cx = x2; cy = y2; } // 如果不是 x1，那共用點一定是 x2

        // 第四點 = 總和 - 3 * 共用點
        double ansX = sumX - 3 * cx;
        double ansY = sumY - 3 * cy;

        cout << fixed << setprecision(3) << ansX << " " << ansY << "\n";
    }
    return 0;
}

/*
UVa 10242 題目

給定平行四邊形的兩個相鄰邊的端點的 (x, y)座標。

找到第四個點的 (x, y)座標。

輸入說明：
輸入包含多組測試資料。
每組測試資料含有8個浮點數。
第一個、第二個浮點數代表第一個邊的端點(x, y)座標
第三個、第四個浮點數代表第一個邊的另一端點(x, y)座標
第五個、第六個浮點數代表第二個邊的端點(x, y)座標
第七個、第八個浮點數代表第二個邊的另一端點(x, y)座標
所有座標均以公尺為單位，請精確到毫米單位(小數點後3位)。
所有座標均在−10000和+10000之間。

輸出說明：
對於每行輸入
請輸出平行四邊形的第四個點的(x, y)座標
以公尺為單位，精確到毫米(小數點後3位)
(x, y)座標請用一個空格隔開。
*/
