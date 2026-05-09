#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
	for (int i = 0; i < letters.size(); i++) {
		if (letters[i] > target) {
			return letters[i];
		}
	}
	return letters[0];
}
int main() {
	vector<char> letters = { 'x', 'x', 'y' };
	char target = 'z';
	char result = nextGreatestLetter(letters, target);	

	cout << result << endl;

	return 0;
}