ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
  ListNode* dummy = new ListNode();
  ListNode* current = dummy;
  
  
  while (list1 != nullptr && list2 != nullptr) {
    if (list1->val < list2->val) {
      current->next = new ListNode(list1->val);
      list1 = list1->next;
    }
    else {
      current->next = new ListNode(list2->val);
      list2 = list2->next;
    }
    current = current->next;
  }
    
  while (list1 != nullptr) {
    current->next = new ListNode(list1->val);
    list1 = list1->next;
    current = current->next;
  }

  while (list2 != nullptr) {
    current->next = new ListNode(list2->val);
    list2 = list2->next;
    current = current->next;
  }
   
  return dummy->next;
}
