SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

 SinglyLinkedListNode* A=new SinglyLinkedListNode(data);
 
 A->next=llist;

return A;
}