// Linear time and constant space 
// head and tail to be kept in mind 
// reverse in grpoups of k and the ones left out will remain as it is 

// a prev pointer to be maintained 

Node* kReverse(Node* head, int k){
     Node* prev = NULL;
     while(this->size > 0){
       Node* curr = new Node();
       if(this->size >=k){
          for(int i = 0; i< k; i++){
            int val = this->getFirst();
            this->removeFirst();
            curr.addLast(val);
           } 
        }
     else{
     int os = this->size();
     for(int i =0; i<os; i++){
        int val = this->getFirst();
        this->removeFirst();
        curr.addLast(val);
      }
    }
    if(prev == NULL){
    prev = curr;
    }
    else{
     prev->tail->next = curr->head;
     prev->tail = curr->tail;
     prev->size += curr->size;
    }
  }
  this->head = prev->head;
  this->tail = prev->tail;
  this->size = prev->size;
  } 
}