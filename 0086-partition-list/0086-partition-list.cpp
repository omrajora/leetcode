
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
    //farzi node created
    ListNode*lo=new ListNode(100);
    ListNode*hi=new ListNode(234); 
    ListNode*tempLo=lo;
    ListNode*tempHi=hi;
    ListNode*temp=head;
    while(temp!=NULL){
        if(temp->val<x){
            tempLo->next=temp;
            temp=temp->next;
            tempLo=tempLo->next;
        }
        else{//temp->val>=x
        tempHi->next=temp;
        temp=temp->next;
        tempHi=tempHi->next;

        }
    }
    tempLo->next=hi->next;
    tempHi->next=NULL;
    return lo->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna