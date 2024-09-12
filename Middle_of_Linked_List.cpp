
Given the head of a linked list, the task is to find the middle. For example, the middle of 1-> 2->3->4->5 is 3. If there are two middle nodes (even count), 
return the second middle. For example, middle of 1->2->3->4->5->6 is 4.

************************************************************************************************************************************************************************

class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
         if (head == NULL)
         return -1;
         
    Node* slow = head;
    Node* fast = head;
   
    // Traverse the list: fast moves two steps, slow moves one step
   
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    // When the loop ends, slow will be at the middle node
    return slow-> data;
        // code here
    }
};
