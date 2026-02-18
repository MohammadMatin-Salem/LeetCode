#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int ir = 0, iw = 0, j = 0;
		vector <int>temp(nums1.begin(), nums1.begin() + m);
		while (ir < m && j < n) {
			if (temp[ir] <= nums2[j]) nums1[iw++] = temp[ir++];
			else nums1[iw++] = nums2[j++];
		}
		if (ir < m)
			for (ir; ir < m; ir++) nums1[iw++] = temp[ir];
		if (j < n)
			for (j; j < n; j++) nums1[iw++] = nums2[j];
	}
};

int main() {
	Solution slt;
	int m = 3, n = 3;
	vector <int>vec1{ 1,2,5,0,0,0 };
	vector <int>vec2{ 4,4,6 };

	slt.merge(vec1, m, vec2, n);


	for (int x : vec1)
		cout << x << " ";
}
