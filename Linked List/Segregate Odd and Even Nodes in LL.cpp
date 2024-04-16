ListNode* oddEvenList(ListNode* head) {

  // brute force using array

  /* ListNode*temp = head;
  vector<int>arr;

  if(head==NULL || head->next==NULL) return head;

  while(temp!=NULL && temp->next!=NULL){
    arr.push_back(temp->data);
    temp=temp->next->next;
  }
  if(temp){
    arr.push_back(temp->data);
  }

  temp = head->next; 
  // NOW REPEAT SAME PROCESS ABOVE FOR EVEN INDICES

  while(temp!=NULL && temp->next!=NULL){
    arr.push_back(temp->data);
    temp=temp->next->next;
  }
  if(temp){
    arr.push_back(temp->data);
  }

  int i=0, temp = head;

  while(temp){
    temp->data = arr[i];
    i++;
    temp = temp->next;
  } 
  return head; */


  // OPTIMISE ONE BELOW
if(head ==NULL || head->next ==NULL){
            return head;
        }
        ListNode*odd = head;
        ListNode*even = head->next;

        ListNode*evenhead = head->next;

        while(even!= NULL && even->next!=NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
            
        }
        odd->next = evenhead;
        return head; 
  

  
  
}
