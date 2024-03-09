        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forw = NULL;
        if (head == NULL || head -> next == NULL) {
            return head;
        }
        else {
            while (curr != NULL) {
                forw = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = forw;
            }
[
