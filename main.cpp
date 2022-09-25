#include <iostream>
#include <map>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int count = 0;
    ListNode* prev = head;
    ListNode* current = head;
    while (current->next != nullptr) {
        current = current->next;
        count++;
        if (count > n) {
            prev = prev->next;
        }
    }
    if (count == (n - 1)) {
        return head->next;
    }
    prev->next = prev->next->next;
    return head;
}

int main() { return 0; }