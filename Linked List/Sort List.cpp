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
        
}
