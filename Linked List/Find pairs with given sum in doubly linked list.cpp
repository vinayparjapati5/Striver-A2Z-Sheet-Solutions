vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.

    // BRUTE FORCE

    Node*temp1 = head;
    vector<pair<int,int>>ans;

    while(temp1!=NULL){

            Node*temp2 = temp1->next;

            while(temp2!=NULL && temp1->data+temp2->data <= k){
                
                if(temp1->data+temp2->data == k){
                  ans.push_back({temp1->data, temp2->data});
                }
                  temp2 = temp2->next;  
                            

            }

            temp1 = temp1->next;

    }

    return ans;


  ==========================================================================

    // OPTIMAL APPROACH make use of sorted 

    Node* findTail(Node*head){

    Node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    return tail;
}

   Node*left = head;
    Node*right = findTail(head);
    vector<pair<int,int>>ans;

    while(left->data < right->data){
        if(left->data + right->data ==k){

            ans.push_back({left->data, right->data});

            left = left->next;
            right  = right->prev;

        }

        else if(left->data + right->data < k){
            left = left->next;
        }
        else {
            right = right->prev;
        }
    }

    return ans;




}
