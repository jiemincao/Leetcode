/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* new_node(int data)
{
    struct ListNode *newnode=NULL;
    newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = data;
    newnode->next = NULL;
    return newnode;   
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head    = NULL;
    struct ListNode *current = NULL;
    struct ListNode *rear    = NULL;
    int temp   = 0;
    int result = 0;
    
    while(l1 != NULL || l2 != NULL)
    {
        result = temp + (l1? l1->val: 0) + (l2? l2->val: 0);
        
        temp   = (result >= 10)? 1 : 0;
        result = (result >= 10)? (result-10):result;
        
        current = new_node(result);
        if (!head)
        {
            head = current;
        }            
        else
        {
            rear-> next = current;
        }
        rear = current;
        if (l1)
        {
            l1 = l1->next;
        }   
        if (l2)
        {
            l2 = l2->next; 
        }
        if(temp == 1)
        {
            rear->next=new_node(1);
        }              
    }
    return head; 
}
