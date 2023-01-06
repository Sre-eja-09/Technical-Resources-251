int KthfromLast(int k){
   Node* slow = head;
   Node* fast = head;
   
   for(int i=0; i<k; i++){
      fast = fast->next;
   }
   
   while(fast->next != NULL){
      slow = slow->next;
      fast = fast->next;
   }
   return slow->data;
}