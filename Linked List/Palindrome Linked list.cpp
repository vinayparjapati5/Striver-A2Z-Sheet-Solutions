bool isPalindrome(ListNode* head) {

  // BRUTE FORCE using stack

 /* stack<int>st;
  ListNode*temp = head;
  while(temp!=NULL){
    st.push(temp->val);
    temp = temp->next;
  }

  temp= head;
  while(temp!=NULL){
    if(temp->val!=st.top()){
      return false;
    }
    temp = temp->next;
    st.pop();
  }
  return true ; */

  tortoise n hare

  
        if(head==NULL || head->next==NULL) return true;
        ListNode*slow = head, *fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL){ // finding first middle of linked list 
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode*newhead = reverseLL(slow->next);

        ListNode*first = head;
        ListNode*second = newhead;

        while(second!=NULL){
            if(first->val!=second->val){
                reverseLL(newhead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLL(newhead);
        return true;

  


  

}


ListNode* reverseLL(ListNode*head){

        ListNode*temp = head, *prev = nullptr;
        while(temp){
        ListNode*front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
        }
        return prev;
    }
