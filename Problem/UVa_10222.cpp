#include <iostream>
#include <string>
#include <vector>>
#include <cctype>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string Original = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string sentence;

	while (getline(cin, sentence)) {
		for (int i = 0; i < sentence.length(); i++) {
			char c = tolower(sentence.at(i));

			if (c == ' ') {
				cout << ' ';
			}
			else {
				for (int j = 0; j < Original.length(); j++) {
					if (c == Original.at(j)) {
						cout << Original.at(j - 2);
						break;
					}
				}
			}
		}
		cout << "\n";
	}
	return 0;
}

/*
UVa 10222 題目

BUET大學有一位老教授就發瘋了。他開始說一些奇怪的話。沒有人能夠聽得懂他的上課內容。
最終，BUET大學陷入了難題。無法讓這位老教授繼續在大學教書。
突然有一位學生(肯定是UVA ACM章節的註冊作者，並且在online judge排名很高)創造了一個可以將教授說的話解碼的程式。
在此之後，老教授又繼續正常的教書，每個人都感到很開心。
因此，如果你有機會參訪BUET大學，並且看到一位老師正在用裝有語音辨識麥克風講話，你可別嚇到。
因為現在你的工作就是寫相同的程式來解碼瘋狂老教授的語言。

輸入說明：
輸入僅包含一筆測試資料，也就是編碼後的訊息。
這筆測試資料包含一個或多個單字。
字母皆為小寫。

輸出說明：
根據測試資料，輸出解碼後的單字。
還好，這工作並不難，只要把每個字母或符號以鍵盤上它左邊第二個鍵的符號來取代就行了。
不會有不合理的情況，比方說編碼訊息為a，但是a在鍵盤上沒有左邊。
空白和換行請直接輸出。
*/
