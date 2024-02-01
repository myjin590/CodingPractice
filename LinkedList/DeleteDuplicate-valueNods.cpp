SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* curr = llist;
    if(llist == NULL || llist->next == NULL){
        return llist;
    }
    
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
    }
    return llist;
}
