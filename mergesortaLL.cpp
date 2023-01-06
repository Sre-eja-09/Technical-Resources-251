Node* mindnode(Node* head){
  Node* f = head;
  Node* s = head;
  while(f!= NULL && f->next != NULL){
    f = f->next->next;
    s = s->next;
  }
  return s;
}
Node* merge(Node* left, Node* right){
      if(right == NULL){
         return left;
      }   
      if(left == NULL){
         return right;
      }
      Node* ans = new Node(-1);
      Node* temp = ans;
      
      // merge two sorted linked list 
      while(left!= NULL && right!= NULL){
         if(left->data< right->data){
           temp->next = left;
           temp = left;
           left = left->next;
         }
         else{
           temp->next = right;
           temp = right;
           right = right->next;
         }
      }
      
      while(left!= NULL){
           temp->next = left;
           temp = left;
           left = left->next;
      }
      while(right!= NULL){
           temp->next = right;
           temp = right;
           right = right->next;        
      }
      ans = ans->next;
      return ans;     
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
       return head;
    }
    Node* mid = midnode(head);
    Node* left = head;
    Node* right = mid->next;
    
    mid->next = NULL;
    
    left = mergeSort(left);
    right = mergeSort(right);
    Node* result = merge(left, right);
    return result;
    
}