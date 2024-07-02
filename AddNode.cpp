SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
    SinglyLinkedListNode* A=new SinglyLinkedListNode(data);
    A->data=data;
    A->next=nullptr;
    if(head==nullptr)
    {
        return A;
    }
   
    SinglyLinkedListNode* temp=head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    
    temp->next=A;
    
    return head;
}