// 19. Remove Nth Node From End of List
  
// Given the head of a linked list, remove the nth node from the end of the list and return its head.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;  
        ListNode* slow=head;
        
        for(int i=0;i<n;i++){ // Here we take the the fast pointer to nth position.
            fast= fast->next;
        }
        //Now after coming out of this loop,it can just travel
        //till the last of the list i.e l-n where l is the total length. which is exactly how much
        // our slow pointer has to travel to reach the nth digit from the end !
        
        if(fast ==NULL){            //This handles the case where the n=l so that makes the fast now null
            return head->next;       //and as we know we have to just remove the first element so we do that
        }
        
        while(fast->next != NULL){   //Taking the fast and slow together a distance of l-n
          slow=slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next; //We come out of the loop with the slow being just before the element                                          to be deleted so we just attach it's next to the next's next !
        
        return head;               //Awesome now we return head !
    }
    
};