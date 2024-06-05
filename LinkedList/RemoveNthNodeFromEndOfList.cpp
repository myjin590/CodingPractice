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
        
      if(n==1 && head->next == NULL)
        return NULL;

        //find the size of list
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        int index = count - n;
        temp = head;

        for(int i=1; i<index; i++){
            temp = temp->next;
        }
        if(index != 0){
            temp->next = temp->next->next;
        }
        else{
            head = head->next;
        }
        return head;
    }
};
