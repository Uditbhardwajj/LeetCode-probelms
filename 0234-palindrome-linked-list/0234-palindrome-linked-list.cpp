class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return true;

        // Step 1: Find the middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;

        while (curr != nullptr) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // Step 3: Compare both halves
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            if (first->val != second->val)
                return false;

            first = first->next;
            second = second->next;
        }

        return true;
    }
};