/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        
        Node* one = new Node(0);
        Node* two = new Node(0);
        Node* zero = new Node(0);
        Node* oneh = one;
        Node* twoh = two;
        Node* zeroh = zero;
        Node* temp = head;
        
        while(temp != NULL){
            if(temp->data == 1){
                    one->next = temp;
                    one = one->next;
            }
            else if(temp->data == 2){
                    two->next = temp;
                    two = two->next;
            }
            else{
                    zero->next = temp;
                    zero = zero->next;
            }
            
            temp = temp->next;
        }
        
        zero->next = (oneh->next != NULL)? oneh->next : twoh->next;
        one->next = twoh->next;
        two->next = NULL;
        
        return zeroh->next;
        
    }
};