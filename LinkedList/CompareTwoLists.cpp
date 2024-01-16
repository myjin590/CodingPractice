//Compare Two Linked List
//if all data attributes are equals and length is same then return true, else false


bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if (head1 == NULL && head2 == NULL){
        return true;

    }
    
    while (head1 != NULL) {
        if (head2 == NULL || head1->data != head2->data) {
            return false;
        }
    
        head1 = head1->next;
        head2 = head2->next;
    }

    return head2 == NULL;
    
}
