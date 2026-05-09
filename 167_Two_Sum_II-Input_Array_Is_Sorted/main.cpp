#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
	vector<int> result;
	int i = 0, j = numbers.size() - 1;
		while(i < j ) {
			int sum = numbers[i] + numbers[j];
			if (sum == target) {
				result.push_back(i + 1);
				result.push_back(j + 1);
				return result;
			} else if (sum < target) {
				i++;
			} else {
				j--;
			}
		}
	return result;
}
int main() {
	vector<int> numbers = { 2, 3, 5, 6 };
	int target = 7;
	vector<int> result = twoSum(numbers, target);

	for (auto i : result) {
		cout << i << " ";
	}
	return 0;
}