Node* mergeTwoLL(Node* head1, Node* head2){
   Node* temp1 = head1;
   Node* temp2 = head2;
   
   Node* head3 = new Node();
   while(temp1!=NULL && temp2!=NULL){
       if(temp1->data < temp2->data){
          //add temp1->data to the end of head3 
          temp1 = temp1->next;
       }
       else{
          //add temp2->data at the end of head3
          temp2 = temp2->next;   
       }
   }
   while(temp1!=NULL){
       //add temp1->data to the end of head3 
       temp1 = temp1->next;
   }
   
   while(temp2!=NULL){
       //add temp2->data to the end of head3 
       temp2 = temp2->next;
   }
   return head3;
}