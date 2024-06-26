 ListNode* reverseLL(ListNode*head){
        ListNode*temp = head, *prev = nullptr;
        ListNode*front = temp->next;
         
        while(temp!=NULL){
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    int lengthLL(ListNode*head){
        ListNode*temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL)
            return NULL;

        //step1:  reverse first K nodes
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* check = head;
        //step1: There are fewer than k nodes remaining
        for (int i = 0; i < k; i++) {
            if (check == NULL)
                return head; 
            check = check->next;
        }
        //step3: Recursion
        int count = 0;
        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        // step4: Return head of reversed linked list
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }
        return prev;
        
    }

===================================================================================

 
    ListNode* reverseLL(ListNode*head){
        ListNode*temp = head, *prev = nullptr;
        ListNode*front = temp->next;
         
        while(temp!=NULL){
            ListNode*front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    int lengthLL(ListNode*head){
        ListNode*temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    ListNode* getKthNode(ListNode * temp, int k){
        k-=1;

        while(temp!=NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode*temp = head;
        ListNode*prevNode = NULL;

        while(temp!=NULL){
            ListNode*KthNode = getKthNode(temp,k);
        

            if(KthNode ==NULL){
                if(prevNode){
                    prevNode ->next = temp;
                }
                break;
            }
        

           ListNode* nextNode = KthNode->next;
            KthNode->next = NULL;

            reverseLL(temp);

            if(temp==head){
                head = KthNode; //for first k

            }
            else{
                prevNode->next = KthNode;
            }
            prevNode = temp;
            temp = nextNode;
        }
    
        return head;
    }
