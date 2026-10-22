/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        int count = 0;
       
        
        unordered_set<Node*>visited;
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            if(visited.find(curr) != visited.end()){
                prev->next = NULL;
                return;
            }
            visited.insert(curr);
            prev = curr;
            curr = curr->next;
            
            
        }
    }
};