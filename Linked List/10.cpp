Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *p=head1, *q=head2, *head=NULL, *last, *temp;
    while(p && q){
        if(p->data < q->data)
            p = p->next;
        else if(q->data < p->data)
            q = q->next;
        else{
            temp = new Node(p->data);
            p = p->next;
            q = q->next;
            if(head==NULL)
                head=last=temp;
            else{
                last->next = temp;
                last = temp;
            }
        }
    }
    return head;
}