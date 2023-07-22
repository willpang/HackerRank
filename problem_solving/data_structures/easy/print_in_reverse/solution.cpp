/*
    Print elements of a linked list in reverse order as standard output
    head pointer could be NULL as well for empty list
    Node is defined as 
    struct Node
    {
        int data;
        struct Node *next;
    }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head == NULL) return;
    
    Node * tail = NULL;
    while(head != NULL){
        Node * temp = new Node;
        temp->data = head->data;
        temp->next = tail;
        tail = temp;
        head = head->next;
    }
    
    Node * curr = tail;
    while(curr != NULL){
        cout << curr->data << endl;
        curr = curr->next;
    }
    return;
}
