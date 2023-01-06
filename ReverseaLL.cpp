void reverseLL(){
  Node prev = NULL;
  Node curr = head;
  
  while(curr != NULL){
     Node *next = curr->next;  // next node is created to save the link between the nodes 
     curr->next = prev;
     prev = curr;
     curr = next;
  }
  // swap the contents of head and tail 
  Node* temp = head;
  head = tail;
  tail = temp;
  
}