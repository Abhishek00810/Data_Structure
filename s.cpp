#include<bits\stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};
void atlast(node* &head, int val)
{
    node* n = new node(val);
    if(!head) 
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void disp(node* head)
{
    node* temp = head;
    while(temp)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* head)
{
    node* curr = head;
    node* next;
    node* prev = NULL;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main()
{
    node* head = NULL;
    atlast(head,1);
    atlast(head,5);
    atlast(head,4);
    atlast(head,9);
   disp(head);
    node* head1 = NULL;
    atlast(head1,0);
    atlast(head1,45);
    atlast(head1,2);
    atlast(head1,0);
    disp(head1);

}