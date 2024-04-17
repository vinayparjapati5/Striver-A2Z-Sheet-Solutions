Node* sortList(Node *head){
    // Write your code here.

    /*BRUTE FORCE
    Node*temp = head;
    int cnt0 = 0, cnt1=0, cnt2=0;

    while(temp){
        if(temp->data==0){
            cnt0++;
        }
        else if(temp->data==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
        temp = temp->next;
    }
    temp = head;

    while(temp){
        if(cnt0){
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1){
            temp->data = 1;
            cnt1--;
        }
        else{
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    }
    return head; */


    // OPTIMAL --> DUMMY NODE APPROACH
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*temp = head;

    Node*zerohead = new Node(-1);
    Node*onehead = new Node(-1);
    Node*twohead = new Node(-1);

    Node*zero = zerohead, *one = onehead, *two = twohead;

    while(temp){
        if(temp->data==0){
            zero->next = temp;
            zero = temp;
        }

        else if(temp->data==1){
            one->next = temp;
            one = temp;
        }

        else if(temp->data==2){
            two->next = temp;
            two = temp;
        }

        temp = temp->next;  
    }

    zero->next = (onehead->next)?onehead->next:twohead->next;
    one->next = twohead->next;
    two->next = nullptr;

    

    return zerohead->next;
}
