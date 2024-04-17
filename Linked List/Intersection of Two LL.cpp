ListNode *collisionpt(ListNode*t1, ListNode*t2, int d){
        while(d){
            d--;
            t2 = t2->next;
        }
        while(t1!=t2){
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
    }


MAIN QUES Starts from below----
=====================================================================================================================

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
   
   
   //using hashing

        unordered_map<ListNode* , int>mpp;
        
        ListNode*temp = headA;

        while(temp){
            mpp[temp]=1;
            temp = temp->next;
        }

        temp = headB;

        while(temp){
            if(mpp.find(temp)!=mpp.end()){
                return temp;
            }
            temp = temp->next;
        }
        return NULL

=================================================================================================================
      APPROACH 2

           ListNode*t1 = headA, *t2 = headB;
        int n1 = 0, n2 = 0;

        while(t1){
            n1++;
            t1 = t1->next;
        }

        while(t2){
            n2++;
            t2 = t2->next;
        }

        if(n1<n2){
            return collisionpt(headA, headB, n2-n1);
        }
        else{
            return collisionpt(headB, headA, n1-n2);
        }

  ============================================================================================================
          APPROACH 3 (OPTIMAL)

     if(headA==NULL || headB == NULL){
            return NULL;
        }

        ListNode*t1 = headA, *t2= headB;

        while(t1!=t2){

            t1 = t1->next;
            t2 = t2->next;

            if(t1==t2){
                return t1;  //collision pt
            }

            if(t1==NULL){
                t1 = headB;
            }
            if(t2 == NULL){
                t2 = headA;
            }
        }
        return t1;
    

    }
