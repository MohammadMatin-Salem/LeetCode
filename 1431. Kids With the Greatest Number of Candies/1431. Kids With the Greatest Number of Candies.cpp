#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		int topCandies = candies[0];
		vector <bool> ans;
		for (int j = 0; j < candies.size(); j++) {
			if (candies[j] > topCandies)
				topCandies = candies[j];
		}

		for (int i = 0; i < candies.size(); i++) {
			if (candies[i] + extraCandies >= topCandies)
				ans.push_back(true);
			else
				ans.push_back(false);
		}
		return ans;
	}
};

int main() {
	Solution slt;
	vector <int> input1;
	vector <bool> output;
	int input2;

	input1 = { 1,5,6,7 };
	input2 = 5;
	output = slt.kidsWithCandies(input1, input2);

	for (int k : output) {
		cout << k << " ";
	}
}
