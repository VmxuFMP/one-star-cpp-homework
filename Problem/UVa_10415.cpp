#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
	map<char, string> finger_map = {
        {'c', "0111001111"},
        {'d', "0111001110"},
        {'e', "0111001100"},
        {'f', "0111001000"},
        {'g', "0111000000"},
        {'a', "0110000000"},
        {'b', "0100000000"},
        {'C', "0010000000"},
        {'D', "1111001110"},
        {'E', "1111001100"},
        {'F', "1111001000"},
        {'G', "1111000000"},
        {'A', "1110000000"},
        {'B', "1100000000"}
    };

	int N;
	cin >> N;
    cin.ignore();
	
	while(N--) {
        string s;
        getline(cin, s);
		int count[10] = { 0 };

        string prev_fingers = "0000000000";

        for (char c : s) {
            string curr_fingers = finger_map[c];
            for (int i = 0; i < 10; i++) {
                if (prev_fingers[i] == '0' && curr_fingers[i] == '1') {
                    count[i]++;
                }
            }
            prev_fingers = curr_fingers;
        }
        for (int i = 0; i < 10; i++) {
            cout << count[i] << (i < 9 ? " " : "");
        }
        cout << "\n";
	}
    return 0;
}

/*
UVa 10415 題目

Do you like saxophone? I have a Eb Alto Saxophone, shown on the right.
My ngers move A LOT when playing some music, and I'm quite
interested in how many times each nger PRESS the button. As-
sume that the music is composed of only 8 kinds of note. They are:
C D E F G A B in one octave and C D E F G A B in a higher
octave. We use c,d,e,f,g,a,b,C,D,E,F,G,A,B to represent them. The
ngers I use for each note are:
• c: nger 2∼4, 7∼10
• d: nger 2∼4, 7∼9
• e: nger 2∼4, 7, 8
• f: nger 2∼4, 7
• g: nger 2∼4
• a: nger 2, 3
• b: nger 2
• C: nger 3
• D: nger 1∼4, 7∼9
• E: nger 1∼4, 7, 8
• F: nger 1∼4, 7
• G: nger 1∼4
• A: nger 1∼3
• B: nger 1∼2
(Note that every nger is controlling a speci ed button, different
fingers are controlling different buttons.)
Write a program to help count the number of times each nger presses the button. A nger presses
a button if it is needed in a note, but not used in the last note. Also, if it is the rst note, every nger
required presses the button.

輸入說明：
The first line of the input is a single integer t (1 ≤ t ≤ 1000), indicating the number of test
cases. For each case, there is only one line containing the song. The only allowed characters are
{`c',`d',`e',`f',`g',`a',`b', `C’,`D',`E',`F',`G',`A',`B'}. There are at most 200 notes in a song, and the song
maybe empty.

輸出說明：
For each test case, print 10 numbers indicating the number of presses for each nger. Numbers are
separated by a single space.
*/
