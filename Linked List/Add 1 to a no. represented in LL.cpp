==================================================
  RECURSIVE APPROACH

  int addhelper(Node *temp){

    if(temp ==NULL) return 1;

    int carry = addhelper(temp->next);
    temp->data +=carry;

    if(temp->data < 10){
        return 0;
    }
    temp->data =0;
    return 1;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.

    int carry  = addhelper(head);

    if(carry==1){
       Node* newNode = new Node(1);
       newNode->next = head;
       return newNode;
    }
    return head;
    

}
==================================================================================

  ITERATIVE APPROACH

  Node* reverseLL(Node* head){

Node*temp = head, *prev = nullptr;

while(temp){
Node*front = temp->next;
temp->next = prev;
prev = temp;
temp = front;
}
return prev;



  Node *addOne(Node *head){

      head = reverseLL(head);

      Node*temp = head;
      int carry = 1;
      
      while(temp!=NULL){
      temp->data +=carry;
      
      if(temp->data < 10){
      carry = 0;
      break;
      }
      else{
      temp->data = 0;
      carry = 1;
      }
      temp = temp->next;
      
      }

 if(carry==1){
       Node* newNode = new Node(1);
       newNode->next = head;
       return newNode;
    }
    return head;

  }


======================================================================



