#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	map<string, string> phoneBook;

	int i = 0;
	while (i < n) {
		string line;
		getline(cin, line);

		string name, phone;
		for (int j = 0; j < line.size(); ++j) {
			if (isspace(line[j])) {
				continue;
			} else if (!isdigit(line[j])) {
				name += line[j];
			} else {
				phone += line[j];
			}
		}

		phoneBook.insert(pair<string,string>(name, phone));
		i++;
	}

	string line;
	while (getline(cin, line)) {
		auto it = phoneBook.find(line);
		if (it != phoneBook.end()) {
			cout << it->first << "=" << it->second << endl;
		} else {
			cout << "Not found" << endl;
		}
	}

	return 0;
}
