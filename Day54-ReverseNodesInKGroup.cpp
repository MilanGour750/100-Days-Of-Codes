class Solution {
public:
    ListNode *reverse(ListNode *head, ListNode *stop, ListNode *last)
    {
        ListNode *pre = NULL, *cur = head, *next;
        while(cur != stop) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        if(last != NULL)
            last->next = pre;
        return head;
    }
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(head == NULL)
            return NULL;
        ListNode *newHead = head, *stop = head, *last = NULL;
        int cnt = k - 1;
        bool firsttime = true;
        while(true) {
            while(cnt && (stop != NULL)) {
                stop = stop->next;
                --cnt;
            }
            if(cnt > 0 || stop == NULL)
                break;
            if(firsttime) {
                head = stop;
                firsttime = false;
            }
            stop = stop->next;
            reverse(newHead, stop, last)->next = stop;
            last = newHead;
            newHead = stop;
            cnt = k - 1;
        }
        return head;
    }
};
