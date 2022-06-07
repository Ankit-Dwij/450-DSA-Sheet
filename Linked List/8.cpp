class Solution
{
    public:
    
    int calc(Node* head) {
        if(!head) return 1;
        int x = head->data + calc(head->next);
        head->data = x%10;
        if(x/10) return 1;
        return 0;
        
    }
    
    Node* addOne(Node *head) 
    {
        head->data = head->data + calc(head->next);
        int temp = (head->data)/10;
        if(temp) {
            Node* p = new Node(temp);
            head->data = (head->data)%10;
            p->next = head;
            head = p;
        }
        return head;
    }
};
