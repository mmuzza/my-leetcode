/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* count = head;
        ListNode* headCopy = head;
        int counter = 0;

        while(count){
            counter++;
            count = count->next;
        }

        counter = counter - n; // 5 - 2 = 3
        int tracker = 0;

        if(counter == 0){ // if removing first node
            return head->next;
        }

        while(headCopy){
            tracker++;

            if(tracker == counter){ // we can remove the next node
                headCopy -> next = headCopy->next->next;
            }

            headCopy = headCopy->next;
        }

        return head;
    }
};