Node* reverseDLL(Node* head)
{   
   if(head == nullptr)
   return head;
   Node * t = nullptr;
   while(head != nullptr)
   {
       t = head;
       head = head->next;
       swap(t->next,t->prev);
   }
   return t;
   
}