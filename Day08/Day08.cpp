#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main() {
	string n;
	getline(cin, n);

	map<string, string> phoneBook;

	int i = 0;
	while (i < stoi(n)) {
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
	bool found = false;
	while (std::getline(std::cin, line)) {
		for (auto const& pair : phoneBook) {
			if (line == pair.first) {
				cout << pair.first << "=" << pair.second << endl;
				found = true;
			}
		}
		if (!found) {
			cout << "Not found" << endl;
		}
		found = false;
	}

	return 0;
}

