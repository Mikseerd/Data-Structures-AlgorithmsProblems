#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
	vector<int> result;
	for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();) {
		if (nums1[i] == nums2[j]) {
			result.push_back(nums1[i]);
			i++;
			j++;
		}
		else if (nums1[i] < nums2[j]) {
			i++;
		}
		else {
			j++;
		}
	}
	return result;
}
int main() {
	vector<int> nums1 = { 2};
	vector<int> nums2 = { 2 };
	vector<int> result = intersection(nums1, nums2);

	for (auto i : result) {
		cout << i << " ";
	}
	return 0;
}