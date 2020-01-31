#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i = 0; i < T; ++i) {
		string str;
		cin >> str;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		for (int j = 0; j < str.length(); ++j) {
			if (j % 2 == 0) {
				cout << str[j];
			}
		}

		cout << " ";

		for (int j = 0; j < str.length(); ++j) {
			if (j % 2 == 1) {
				cout << str[j];
			}
		}

		cout << endl;
	}
	return 0;
}
