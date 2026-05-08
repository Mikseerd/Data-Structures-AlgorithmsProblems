#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int guessNumber(int n) {
	int a = 1, b = n;
	while (a <= b) {
		int mid = a + (b - a) / 2;
		int res = guess(mid);
		if (res == 0) {
			return mid;
		}
		else if (res < 0) {
			n = mid - 1;
		}
		else {
			n = mid + 1;
		}
	}
	return 0;
};
				
int main() {
	int n =  10;
	int pick = 6;
	int result = guessNumber(n);
	cout << result << endl;
	return 0;
}