class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       
        ListNode* prev = nullptr; 
        ListNode* next = nullptr; 
        ListNode* curr = head;   

       
        while (curr != nullptr) {
            // Save the next node
            next = curr->next;

          
            curr->next = prev;

           
            prev = curr; 
            curr = next; 
        }

        
        return prev;
    }
};

// output
// head =[1,2,3,4,5]
