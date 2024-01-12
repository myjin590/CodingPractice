//Q:Delete the node at a given position in a linked list and return a reference to the head node. The head is at position 0. 
//The list may be empty after you delete the node. In that case, return a null value.

//Solution:
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    if(position == 0){
        llist = llist->next;      
        return llist;
    }
    
    else{
        SinglyLinkedListNode* curr = llist;
        SinglyLinkedListNode* prev = llist;
        for(int i=0; i<position; i++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }
    return llist;
}
