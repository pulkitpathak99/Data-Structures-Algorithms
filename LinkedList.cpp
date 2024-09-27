// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;

//     }
// };
// void InsertAtHead(Node* &head , int d){
//     Node* temp= new Node(d);
//     temp->next=head;
//     head=temp;
// }

// void Traversal (Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// void InsertAtEnd (Node* &head, Node* &tail , int d){
//     while (tail->next!=NULL){
//         tail=tail->next;
//     }
//     Node* tem= new Node(d);
//     tail->next=tem;
//     tail=tem;   
// }

// void DelAtPos( Node *&head, int pos){
//     Node* prev= head;
//     int count=1;
//     if (head == NULL)
//         return;

//     // If the position is 1, delete the head node
//     if (pos == 1) {
//         Node *temp = head;
//         head = head->next;ṭ
//         delete temp;
//         return;
//     }

//     // If the position exceeds the number of nodes in the list
//     if (prev == NULL || prev->next == NULL)
//         return;
//     while (count<pos-1){
//         prev=prev->next;
//         count++;
//     }
//     Node* temp= prev->next;
//     prev->next = temp->next;
//     cout<<temp->data<<endl;
//     delete temp;
// }


// void InsertAtPosition (int pos, int data, Node* &head){
//     if (pos==1){
//         InsertAtHead(head,data);
//         return;
//     }
//     Node* temp= head;
//     int cnt=1;
//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     Node* NodeToInsert= new Node (data);
//     NodeToInsert->next=temp->next;
//     temp->next=NodeToInsert;
// }

// auto ArrtoLL(vector <int> nums){
//     Node* head = new Node(nums[0]);
//     Node* mover= head;
//     for (int i=1; i<nums.size(); i++){
//         Node *temp = new Node(nums[i]);
//         mover->next=temp;
//         mover = temp;
//     }
//     Traversal (head);
//     InsertAtPosition(2,12,head);
//     Traversal(head);

// }

// int LLL(Node* &head){
//     int count=0;
//     Node* temp= head;
//     while(temp){
//         count++;
//         temp=temp->next;      
//     }
//     return count;
// }

// Node* DelHead(Node* &head){
//     Node* temp=head;
//     head=head->next;    
//     delete temp;
//     return head;
// }

// int main(){
//     Node* node1= new Node(10);
//     // cout<<node1->data<<endl;
//     // cout<<node1->next<<endl;
//     Node* head= node1;
//     Node* tail=node1;
//     Traversal(head);
//     InsertAtHead(head, 20);
//     Traversal(head);
//     InsertAtHead(head,30);
//     Traversal(head);
//     InsertAtPosition(4,60,head);
//     Traversal(head);
//     InsertAtEnd(head, tail,50);
//     Traversal(head);
//     InsertAtEnd(head, tail,50);
//     Traversal(head);
//     ArrtoLL({0,1,2,3,4,5,6});
//     cout<<LLL(head)<<endl;
//     cout<<DelHead(head)->data<<endl;
//     Traversal(head);
//     DelAtPos(head,3);
//     Traversal(head);
//     cout<<tail;
//     return 0;
// };      


class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        this.val=data;
        this.next= null;
    }
};