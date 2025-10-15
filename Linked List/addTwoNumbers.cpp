#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* curr = temp;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }
        return temp->next;
    }
};

// Helper function to create a linked list from vector
ListNode* createList(const vector<int>& nums) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    for (int num : nums) {
        curr->next = new ListNode(num);
        curr = curr->next;
    }
    return dummy->next;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Input for first number
    int n1;
    cout << "Enter number of digits for first number: ";
    cin >> n1;
    vector<int> num1(n1);
    cout << "Enter digits for first number (in reverse order, separated by spaces): ";
    for (int i = 0; i < n1; ++i) {
        cin >> num1[i];
    }

    // Input for second number
    int n2;
    cout << "Enter number of digits for second number: ";
    cin >> n2;
    vector<int> num2(n2);
    cout << "Enter digits for second number (in reverse order, separated by spaces): ";
    for (int i = 0; i < n2; ++i) {
        cin >> num2[i];
    }

    // Create linked lists
    ListNode* l1 = createList(num1);
    ListNode* l2 = createList(num2);

    // Display input lists
    cout << "First number as linked list: ";
    printList(l1);
    cout << "Second number as linked list: ";
    printList(l2);

    // Add numbers
    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    // Display result
    cout << "Sum as linked list: ";
    printList(result);

    cout << "Each node represents a digit in reverse order (ones place first)." << endl;

    return 0;
}