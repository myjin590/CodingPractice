//Q: Insert Node at a head of a linked list


//A:
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	SinglyLinkedListNode* newNode = new SinglyLinkedListNode (data);
    newNode->next = llist;
    
    return newNode;
}
