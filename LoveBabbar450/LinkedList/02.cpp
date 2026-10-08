/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* pre = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node * frwd = curr->next;
            curr->next = pre;
            pre = curr;
            curr = frwd;
        }
        head = pre;
        return head;
    }
};