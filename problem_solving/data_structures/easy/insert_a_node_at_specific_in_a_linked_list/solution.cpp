/*
    Insert Node at a given position in a linked list 
    head can be NULL 
    First element in the linked list is at position 0
    Node is defined as 
    struct Node
    {
        int data;
        struct Node *next;
    }
*/
Node* InsertNth(Node *head, int data, int position)
{
    // Complete this method only
    // Do not write main function. 

    if(head == NULL){
        head = new Node;
        head->data = data;
        head->next = NULL;
        return head;
    }
    
    Node * prev = NULL;
    Node * curr = head;
    
    while (position != 0){
        prev = curr;
        curr = curr->next;
        position--;
    }
    
    Node * temp = new Node;
    temp->data = data;
    temp->next = curr;
    if(prev == NULL) head = temp;
    else prev->next = temp;
    return head;
}
