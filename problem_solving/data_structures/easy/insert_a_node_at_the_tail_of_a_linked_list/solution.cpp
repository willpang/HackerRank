/*
    Insert Node at the end of a linked list 
    head pointer input could be NULL as well for empty list
    Node is defined as 
    struct Node
    {
        int data;
        struct Node *next;
    }
*/

Node* Insert(Node *head,int data)
{
  // Complete this method
    if(head == NULL){
        head = new Node;
        head->data = data;
        head->next = NULL;
        return head;
    }

    Node * curr = head;

    while(curr->next != NULL){
        curr = curr->next;
    }

    curr->next = new Node;
    curr->next->data = data;
    curr->next->next = NULL;

    return head;
}