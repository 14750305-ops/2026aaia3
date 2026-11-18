///week 11-1.cpp

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        while(list1 !=nullptr || list2!=nullptr){
            if(list1 == nullptr){
                now->next = list2;
                break;
            }else if(list2==nullptr){
                now->next = list1;
                break;
            }else{
                if(list1->val < list2->val){
                    now->next = new ListNode(list1->val);
                    now = now->next;
                    list1=list1->next;
                }else{
                    now->next = new ListNode(list2->val);
                    now = now->next;
                    list2=list2->next;
                }
            }
        }

        return ans->next;
    }
};
