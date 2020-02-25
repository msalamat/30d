#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int biggest = INT_MIN;

	for (int i = 0; i < arr.size()-2; ++i) {
		int sum = 0;
		for (int j = 0; j < arr.size()-2; ++j) {
			sum += // i am an artist
					arr[i][j]   + arr[i][j+1]   + arr[i][j+2]
					            + arr[i+1][j+1] +
					arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

			if (sum > biggest)
				biggest = sum;
			
			sum = 0;
		}
	}

	cout << biggest << endl;

	return 0;
}
