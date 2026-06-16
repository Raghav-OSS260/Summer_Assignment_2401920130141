class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int count = 0;
        ListNode* temp = head;

        while (temp) 
        {
            count++;
            temp = temp->next;
        }

        if (count == n) 
        {
            return head->next;
        }

        int pos = count - n;
        temp = head;

        for (int i = 1; i < pos; i++) 
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};