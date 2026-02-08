#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	void moveZeroes(vector<int>& nums)
	{
		vector <int> newNums;
		int zeroNums = 0;

		for (int i = 0; i < nums.size(); i++)
		{

			if (nums[i] != 0)
				newNums.push_back(nums[i]);
				/*
				!WRONG!
				newvector += nums[i];
				!WRONG!
				*/
			else
				zeroNums++;
		}

		for (int j = 0; j < zeroNums; j++)
		{
			newNums.push_back(0);
		}
		nums = newNums;
	}
};

int main()
{
	vector<int> nums{2, 0, 6, 0, 5, 0, 7, 3};
	Solution slt;
	slt.moveZeroes(nums);
	for (int n : nums)
		cout << n << " ";
	cout << endl;
}

