// very basic example on how to use set_rdbuf to make cin read from a file
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream inputFile("inputfile.txt");

	if (inputFile.is_open()) {
		cin.set_rdbuf(inputFile.rdbuf());

		int n;
		cin >> n;
		vector<int> nums;

		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			nums.push_back(num);
		}

		for (auto elem : nums) {
			cout << elem << endl;
		}
	}
	else {
		cout << "Cannot open file." << endl;
	}



	return 0;
}