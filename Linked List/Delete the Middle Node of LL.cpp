ListNode* deleteMiddle(ListNode* head) {

  // BRUTE FORCE

  /* 1. calculate length
  2. then reduce res. if res==0 then change links (main task is to reach node before middle node)

if(head==NULL || head->next==NULL){
            return NULL;
        }
        /*Brute force
        ListNode*temp = head;
        int length = 0;
        while(temp){
            length++;
            temp = temp->next;
        }
        int stepstomove = length/2;
        temp = head;
        while(temp){
            stepstomove--;

        if(stepstomove ==0){
        ListNode*Middlenode = temp->next;
        temp->next = temp->next->next;
        delete(Middlenode);
        }
        temp = temp->next;
        }
        return head;  */
  
        
        //finding a node before middle then change links

        if(head == NULL || head->next ==NULL){
            return NULL;
        }

        ListNode*slow = head, *fast = head;
        fast = fast->next->next;

        while(fast!= NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode*MiddleNode = slow->next;
        slow->next = slow->next->next;
        delete(MiddleNode);

        return head;
        
    }
