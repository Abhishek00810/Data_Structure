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
 void atfirst(node* &head,int val)
 {
     node*n = new node(val);
     n->next=head;
     head=n;
 }
 void atlast(node* &head,int val)
 {
     node*n = new node(val);
     if(head==NULL)
     {
         head=n;
         return;
     }
     node* var=head;
     while(var->next!=NULL)
     {
         var=var->next;
     }
     var->next=n;
 }
 bool search(node* head,int key)
 {
     node* val = head;
     while(val!=NULL){
     if(val->data==key)
     {
         return true;
     }
     val=val->next;
     }
     return false;
     
 }
 void disp(node *head)
 {
     node*var=head;
     while(var!=NULL)
     {
         cout<<var->data<<"->";
         var=var->next;
     }
     cout<<"NULL"<<endl;

 }
 int main(){
     node*head = NULL;
     atlast(head,6);
     atlast(head,32);
     atlast(head,1);
     disp(head);
     //atfirst(head,90);
     cout<<search(head,690);
     //disp(head);
 
 return 0;
 }