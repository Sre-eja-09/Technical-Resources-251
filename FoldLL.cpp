// first - last - second - second last - third - third last

class Solution {
public:
    ListNode* fleft;
    int get_length(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }

    void foldhelper(ListNode* right, int count){
        
        // base condition
        if(right == NULL){
            return;
        }
        //recursion call
        foldhelper(right->next, count+1);
       
        if(count>size/2){
            ListNode* temp = fleft->next;
            fleft->next = right;
            right->next = temp;
            fleft = temp;
        }
        else if(count == size/2){
            tail = right;
            right->next = NULL;
        }

    }
    void reorderList(ListNode* head) {
        fleft = head;
        foldhelper(head, 0);
    }
};