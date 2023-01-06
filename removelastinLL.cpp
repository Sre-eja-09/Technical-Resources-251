void remove_last(){
   if(size==0){
      cout<< "empty list" << endl;
   }
   else if(size ==1){
       head == NULL;
       size =0;
   }
   else{
       Node *temp = head;
       while(temp->next->next != NULL){
            temp= temp->next;
       }   
       temp->next = NULL;
       size = 0;
   }
}