int findlength(Node*slow, Node*fast){

  int cnt = 1;
  fast  = fast->next;

  while(slow!=fast){
    cnt++;
    fast = fast->next;
  }
  return cnt;

}



int lengthOfLoop(Node *head) {

  // HASHING APPROACH
  /*unordered_map<Node*, int>mpp;

  Node*temp = head;
  int timer  = 1;

  while(temp!=NULL){
    if(mpp.find(temp)!=mpp.end()){
      int value = mpp[temp];
      return timer-value;
    }
    mpp[temp] = timer;
    timer++;
    temp = temp->next;
  }
  return NULL ; */

  =====================
    // TORTOISE HARE APPROACH

    Node*slow  = head, *fast = head;

  while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;

    if(slow==fast){
      return findlength(slow,fast);
    }
  }

}
