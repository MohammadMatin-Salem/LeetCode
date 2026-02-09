#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val)
	{
		int iw = 0;

		for (int ir = 0; ir < nums.size(); ir++) {
			if (nums[ir] != val) {
				nums[iw++] = nums[ir];
			}
		}
		return iw;
	}
};

int main()
{
	vector <int> nums = { 1,3,6,8,45,6,8,2,3,1,1,2,35 };
	int val = 2;

	Solution sly;
	int answer = sly.removeElement(nums, val);
	cout << answer;
}