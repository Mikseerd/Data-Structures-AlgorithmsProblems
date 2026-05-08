#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> frequencySort(vector<int> nums) {
	unordered_map<int, int> count;
	for (int i : nums) count[i]++;
	sort(nums.begin(), nums.end(), [&count](int a, int b) {
		if (count[a] != count[b]) return count[a] < count[b];
		return a > b;
		});
	return nums;
}

int main() {
	vector<int> nums = { 1,1,2,2,2,3 };
	vector<int> sorted = frequencySort(nums);

	for (auto i : sorted) {
		cout << i << " ";
	}
	return 0;
	
   
}