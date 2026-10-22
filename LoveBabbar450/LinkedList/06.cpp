/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node* temp = head;
        Node* prev = NULL;
        while(temp != NULL){
            if(temp && prev && temp->data == prev->data){
                //delete temp node
                prev->next = temp->next;
                Node*curr = temp;
                temp = temp->next;
                curr->next = NULL;
                delete curr;
                
                
            }else{
                prev = temp;
                temp = temp->next;
            }
            
            
        }
        return head;
    }
};