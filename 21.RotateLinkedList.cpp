/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

  int getlen(Node* head){
     Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
  }
Node *rotate(Node *head, int k) {
     // Write your code here.
     if(!head) return 0;
     int len=getlen(head);
     int actualK=k%len;
     if(actualK==0) return head;
     int newLastP=len-actualK;
     Node* newLastNode=head;
     for(int i=1; i<newLastP;i++){
          newLastNode=newLastNode->next;
     }
     Node* newHead=newLastNode->next;
     newLastNode->next=0;
     Node* it=newHead;
     while(it->next){
          it=it->next;
     }
     it->next=head;
     return newHead;
     
}
