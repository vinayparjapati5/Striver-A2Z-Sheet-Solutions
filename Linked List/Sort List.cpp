## BEST QUESTION

ListNode* sortList(ListNode* head) {

  // BRUTE FORCE
/*
  ListNode*temp = head;
  vector<int>arr;
  while(temp){
    arr.push_back(temp->data);
    temp = temp->next;
  }
  
  temp = head;
  sort(arr.begin(),arr.end());

  int i=0;
  while(temp){
    temp->data = arr[i];
    i++;
    temp = temp->next;
  }
  return head;
  */


  // OPTIMAL ONE ->MERGE SORT 
1. first find middle (first middle) of Linked list
2. then apply merge sort
3. then merge 2 sort lists
  
        if(head==NULL || head->next ==NULL){
            return head;
        }

        ListNode*middle = findMiddle(head);
        ListNode*right = middle->next;
        
        middle->next = nullptr;

        ListNode*left = head;

        left = sortList(left);
        right = sortList(right);

        return Merge2(left,right);
        
        
}
