#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
	int l = 0, r = s.size() - 1;
	while (l < r) {
		swap(s[l], s[r]);
		l++;
		r--;
	}
}
				
int main() {
	vector<char> s = { 'h', 'e', 'l', 'l', 'o' };
	reverseString(s);

	for (auto i : s) {
		cout << i << " ";
	}
	return 0;
}