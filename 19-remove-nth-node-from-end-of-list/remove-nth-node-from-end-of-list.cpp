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
        int size = 0;
        ListNode* n1= head;
        ListNode* curr=head;
        while (n1!= NULL) {
            size++;
            n1 = n1->next;
        }
        if (size==1||size==n) {
            return head->next;;
        }
        int indexOFNode = size - n;
        int i = 1;
        while (i < indexOFNode) {
            curr = curr->next;
            i++;
        }
        curr->next=curr->next->next;
        return head;
    }
};