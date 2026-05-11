#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};
void deleteNode(ListNode* node) {
	if (node == nullptr) {
		return;
	}
	node->val = node->next->val;
	node->next = node->next->next;
}
