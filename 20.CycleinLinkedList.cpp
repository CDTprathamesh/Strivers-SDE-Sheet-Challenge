/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
#include <unordered_map>
bool detectCycle(Node *head)
{
	//	Write your code here
    unordered_map<Node*, bool >mp;
    Node* temp=head;
    while(temp!=NULL){
        if(mp.find(temp)!=mp.end()){
            return true;
        }
        mp[temp]=true;
        temp=temp->next;
    }
    return false;
}
