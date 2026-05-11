#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int evalRPN(vector<string>& tokens) {
	stack<int> stack;
	int a, b;
	for (auto tok : tokens) {
		if (tok == "+") {
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			stack.push(a + b);
		}
		else if (tok == "-")
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			stack.push(b - a);
		}
		else if (tok == "*")
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			stack.push(a * b);
		}
		else if (tok == "/")
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			stack.push(b / a);
		}
		else stack.push(stoi(tok));
	}
	return stack.top();
}
int main() {
	vector<string> tokens = { "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+" };

	cout << evalRPN(tokens) << endl;

	return 0;
};