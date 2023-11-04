ListNode* deleteDuplicates(ListNode* head) {
  ListNode* current = head, *nextNext;
  
  
  while (current != nullptr && current->next != nullptr) {
    if (current->val == current->next->val)
      current->next = current->next->next;
    else current = current->next;
  }

  return head;
}
