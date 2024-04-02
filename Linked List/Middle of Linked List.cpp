 ListNode* middleNode(ListNode* head) {
        
        /*ListNode*temp = head;
        int cnt=0;

        while(temp!=NULL){
            cnt++;
            temp= temp->next;
        }
        temp = head;

        for(int i=0; i<cnt/2; i++){
            temp= temp->next;
        }
        return temp; */

        // tortoise method -->optimal

        ListNode* slow = head, *fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
