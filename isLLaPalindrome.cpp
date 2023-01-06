class Solution {
public:
    //function to get middle of the linked list 
    ListNode* middleLL(ListNode* head){
       ListNode* slow = head;
       ListNode* fast = head->next;

       while(fast!= NULL && fast->next!= NULL){
           slow = slow->next;
           fast = fast->next->next;
       }
       return slow;
    }
    
    // function to reverse the linked list
    ListNode* reverseLL(ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* fwd = NULL;
    while(curr!= NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }

     return prev;
    }
    bool isPalindrome(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return true;
        }
        ListNode* midnode = middleLL(head);
        midnode = midnode->next;
        ListNode* reversehead =  reverseLL(midnode);
        ListNode* temp = head;
        while(temp!= midnode && reversehead!= NULL){
            if(temp->val != reversehead->val){
                return false;
            }
            temp= temp->next;
            reversehead = reversehead->next;
        }
        return true; 
    }
};