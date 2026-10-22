/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        Node* temp = head;
        unordered_map<Node*, bool>visited;
        while(temp != NULL){
            if(visited[temp] == false){
                visited[temp] = true;
            }else{
                return temp->data;
            }
            temp = temp->next;
            
            
        }
        return -1;
    }
};