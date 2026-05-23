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
