int intersect(Node* head1, Node* head2){
    Node* head1 = temp1;
    Node* head2 = temp2;
int diff = Math.abs(head1 -> size  >  head2-> size);
if(head1 -> size > head2 -> size ){
  for(int i = 0 ; i< diff ; i++){
      temp1 = temp1 -> next;
  }
}else{
       temp2 = temp2->next;
}
while(temp1 != temp2){
   temp1 = temp1 -> next;
   temp2= temp2-> next;
} 
  return temp1 -> next;
}