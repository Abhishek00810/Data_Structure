#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void atlast(node* &head, int val)
{
    node* n  = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void deleteathead(node* &head)
{
    node* todelete = head;
    head=head->next;
    delete todelete;
}
void deletelist(node* &head, int val)
{
    node* temp = head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;
    delete todelete;
    
}
void disp(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    
    cout<<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    atlast(head, 7);
    atlast(head, 7);
    atlast(head, 7);
    atlast(head, 7);
   deletelist(head,7);
 // deleteathead(head);
    disp(head);

return 0;
}