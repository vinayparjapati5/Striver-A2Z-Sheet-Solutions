 ListNode* removeNthFromEnd(ListNode* head, int n) {



   /*BRUTE FORCE 
   
   ListNode*temp = head;
   int length  = 0;
   while(temp){
     length++;
     temp = temp->next;
   }

   if(length ==n){
     //delete the Ist node
     ListNode*newhead = head->next;
     delete(head);
     return newhead;
   }

   temp = head;
   int res = length -n;
   while(temp){   // this will points to delete node
     res--;
     if(res==0) break;
     temp = temp->next;
   }

   ListNode*deleteNode = temp->next;
   temp->next = temp->next->next;
   delete(deleteNode);

   
   return head;    */



   OPTIMAL SOLUTION

    ListNode*slow = head, *fast = head;

        for(int i=0; i<n; i++){
            fast = fast->next;
        }

        if(fast==NULL){
           return head->next; // edge case
        }

        while(fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
        }

        ListNode*deleteNode = slow->next;
        slow->next = slow->next->next;
        delete(deleteNode);

        return head;
       
    }
