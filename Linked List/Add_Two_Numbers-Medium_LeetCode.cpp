/*

Problem :

Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

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
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(); //Making a dummmy node
    ListNode* temp  = dummy; // Assigning it to a temp node to work on
    int sum = 0; int carry = 0;
    while (l1 != NULL || l2 != NULL || sum != 0) { //Only stop when all are null

      if (l1 != NULL) { // Checking to handle different sizes of given LL
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2 != NULL) { // Checking to handle different sizes of given LL
        sum += l2->val;
        l2 = l2->next;
      }
      ListNode* newNode = new ListNode(sum % 10); // Making a new node with just the last                                                            digit
      temp->next = newNode ; //Adding the new node to the LL
      temp = temp->next;
      carry = sum / 10;      //Finding the carry number to be added to the next sum
      sum = carry;            // Already adding the carry to the sum

    }
    return dummy->next;


  }
};