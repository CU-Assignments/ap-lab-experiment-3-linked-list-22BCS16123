class Solution {
public:
   
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* dummyNode = new ListNode(0, head);
      
       
        ListNode* slowPointer = dummyNode;
        ListNode* fastPointer = head;

        
        while (fastPointer && fastPointer->next) {
            slowPointer = slowPointer->next;        
            fastPointer = fastPointer->next->next;  
        }

      
        ListNode* toDelete = slowPointer->next;     
        slowPointer->next = slowPointer->next->next; 

        delete toDelete;

        
        ListNode* newHead = dummyNode->next;
        delete dummyNode;
        return newHead; 
    }
};


Input
head =
[1,3,4,7,1,2,6]
// Output
// [1,3,4,1,2,6]
// Expected
// [1,3,4,1,2,6]

