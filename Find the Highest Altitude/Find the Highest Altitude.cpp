#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int largestAltitude(vector<int>& gain) {
		int result = 0;
		int highest = result;

		for (int i : gain) {
			result += i;
			if (highest < result) {
				highest = result;
			}
		}
		return highest;
	}

};
int main()
{
	Solution slt;
	vector <int> gain = { 4,2,-5,-11,2,6,2,-1,-2,4,-6 };

	int answer = slt.largestAltitude(gain);
	cout << answer << endl;
}
