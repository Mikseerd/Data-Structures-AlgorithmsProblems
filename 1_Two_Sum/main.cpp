#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> result;
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
	return result;
}
int main() {
	vector<int> nums = { 3, 2, 3, 5, 6};
	int target = 7;
	vector<int> result = twoSum(nums, target);

	for (auto i : result) {
		cout << i << " ";
	}
	return 0;
}