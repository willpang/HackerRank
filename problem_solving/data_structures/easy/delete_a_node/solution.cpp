/*
    Delete Node at a given position in a linked list 
    Node is defined as 
    struct Node
    {
        int data;
        struct Node *next;
    }
*/
Node* Delete(Node *head, int position)
{
    // Complete this method
    if(head == NULL) return head;

    Node * prev = NULL;
    Node * curr = head;

    while(position != 0){
        prev = curr;
        curr = curr->next;
        position--;
    }

    if(prev == NULL) head = curr->next;
    else prev->next = curr->next;
    return head;
}
