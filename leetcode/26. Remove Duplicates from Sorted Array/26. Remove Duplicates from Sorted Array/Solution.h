#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		auto iter = unique(nums.begin(), nums.end());
		nums.erase(iter, nums.end());
		return nums.size();
	}
};
