/// week12-4.cpp
class Solution {
public:
    ListNode* reverse(ListNode* head) {

        vector<int> a;
        while (head != nullptr) {
            a.push_back(head->val);
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i = a.size() - 1; i >= 0; i--) {
            now->next = new ListNode(a[i]);
            now = now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode * ans = new ListNode(999);
        ListNode * now = ans;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr){
            if(l1!=nullptr) carry +=l1->val;
            if(l2!=nullptr) carry +=l2->val;
            now->next = new ListNode(carry%10);
            now=now->next;
            carry = carry/10;
            if(l1!=nullptr) l1 = l1->next;
            if(l2!=nullptr) l2 = l2->next;
        }
        if(carry) now->next = new ListNode(carry);
        return reverse(ans->next);
    }
};
