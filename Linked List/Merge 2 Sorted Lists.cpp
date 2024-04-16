ListNode* Merge2(ListNode*first, ListNode*second){
        ListNode*t1 = first, *t2 = second;

        ListNode*dummyNode = new ListNode(-1);
        ListNode*t = dummyNode;

        while(t1&&t2){
            if(t1->val < t2->val){
                t->next = t1;
                t = t1;
                t1 = t1->next;
            }
            else{
                t->next = t2;
                t = t2;
                t2 = t2->next;
            }

            if(t1){
                t->next = t1;
            }
            if(t2){
                t->next = t2;
            }
        }
        return dummyNode->next;

    }
