#include <iostream>
using   namespace std;
class Node{
  public:
    int data ;
    Node* next;
};


Node* add_at_end(Node** wholeList,int i ){
Node* node = new Node();
 node->data = i;
 Node *temp = (*wholeList);
 Node* temp1= new Node();
 temp1 = temp;
 while (temp!=NULL) {
temp= temp->next; 
 }
temp = node;
return temp1;
}





Node* add_at_begin(Node** wholeList,int i){
Node* node = new Node();
 node->data = i;
 node->next=(*wholeList);
 return node;
}
void printList(Node* head){
while (head!=NULL) {
  cout<<head->data;
  head = head->next;
}
}
int main(){
 Node* head =new Node();
 Node* second =new Node();
 Node* third =new Node();
 head->data =4;
 head->next = second;
 second->data = 6;
 second->next = third;
 third->data = 8;
 third->next = NULL;
 head = add_at_begin(&head, 10);
 head = add_at_end(&head, 13);
 printList(head);
}
