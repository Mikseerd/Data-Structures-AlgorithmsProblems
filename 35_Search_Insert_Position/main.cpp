#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int a = 0, b = nums.size() - 1;
	while (a <= b) {
		int c = a + (b - a) / 2;
		if (nums[c] == target) {
			return c;
		}
		else if (nums[c] < target) {
			a = c + 1;
		}
		else {
			b = c - 1;
		}
	}
	return a;
}

				
int main() {
	vector<int> nums = { 1, 3, 5, 6 };
	int target = 7;
	int index = searchInsert(nums, target);
	cout <<  index << endl;
	return 0;
}