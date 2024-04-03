 ListNode *detectCycle(ListNode *head) {
        
        /*bruteforce
        unordered_set<ListNode*>st;

        while(head!=NULL){
            if(st.find(head)!=st.end()){
                return head;
            }
            st.insert(head);
            head = head->next;
        }
        return NULL; */

        // optimal

        ListNode*slow = head, *fast = head;

        while(fast && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return nullptr;


    }
