ListNode* reverseList(ListNode* head) {
        //brute ->using stack
        ListNode*temp = head;
        stack<int>st;

        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp= head;

        while(temp){

            temp->val = st.top();
            st.pop();
            temp=temp->next;
        }
        return head; 
==============================================================================
        //iterative 

        ListNode*temp = head, *prev = nullptr;

        while(temp){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev; 
===================================================================
        //Recursive Solution

        if(head==NULL || head->next == NULL){
            return head;
        }
        ListNode*Newhead = reverseList(head->next);

        ListNode*front = head->next;
        front->next = head;
        head->next = nullptr;

        return Newhead;
    }
