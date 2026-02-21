#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		int fSize = flowerbed.size();
		if (n == 0)  return true;
		for (int i = 0; i < fSize; i++) {
			if (flowerbed[i] == 0) {
				bool left0 = ((i == 0) || (flowerbed[i - 1] == 0));
				bool right0 = ((i == fSize - 1) || (flowerbed[i + 1] == 0));

				if (left0 && right0) {
					flowerbed[i] = 1;
					n--;
				}
			}
		}
		return (n <= 0);
	}
};

int main() {
	vector <int> flower{ 1,0,1,0,0,0 };
	int f = 1;

	Solution slt;
	bool answer = slt.canPlaceFlowers(flower, f);
	cout << answer << endl;
}

