class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeloop(Node* atslow, Node* head)
    {
        Node* slow = atslow;
        Node* fast = atslow;
        int k = 1;
        while(slow->next!=fast)
        {
            slow = slow->next;
            k++;
        }
        
        slow = head;
        
        fast = head;
        
        for(int i = 0;i<k;i++)
        {
            fast = fast->next;
        }
        
        while(fast!=slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        while(fast->next!=slow) fast = fast->next;
        fast ->next = NULL;
    }
    
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* slow = head, *fast = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast)
            {
                removeloop(slow, head);
            }
        }
        
    }
};
