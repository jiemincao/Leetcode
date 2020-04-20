/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    #if 0
    int sum = 0;
    struct ListNode* curr = head;
    while(curr != NULL)
    {
        sum++;
        printf("%d\n",curr->val);
        curr = curr->next;
    }
    int middle = sum/2;
    printf("sum =%d , middle = %d \n",sum,middle);
    int sum2 = 0;
    while(head != NULL)
    {
        if(sum2 == middle)
        {
            printf("2 %d \n",head->val);
            break;
        }
        sum2++;
        head = head->next;
    }
    return head;
    #else
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next; 
    }
    return slow;
    #endif
    
}

