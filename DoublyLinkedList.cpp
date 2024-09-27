#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node (int value){
        this->data=value;
        this->next=NULL;
        this->prev=NULL;
    }
};

void Traversal(Node* &head){
    Node*temp= head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void InsertAtHead(Node* &head, int data){
    Node* temp= new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertAtEnd(Node* &head, int data){
    Node*temp=head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    Node* NodeToBeInserted =new Node (data);
    temp->next=NodeToBeInserted;
    NodeToBeInserted->prev=temp;
}

void InsertAtPosition(Node* &head, int pos, int data){
    int count=1;
    Node* temp= head;
    if (pos==1){
        InsertAtHead(head,data);
        return;
    }
    while (count<pos-1){
        temp=temp->next;
        count++;
    }
    if (temp->next==NULL || temp==NULL){
        InsertAtEnd(head,data);
        return;
    }
    Node* NodeToBeInserted= new Node (data);
    NodeToBeInserted->next=temp->next;
    temp->next=NodeToBeInserted;
    NodeToBeInserted->prev=temp;
    temp->next->prev=NodeToBeInserted;
}

void DelHead(Node* &head){
    Node* temp=head;
    head=temp->next;
    head->prev=NULL;
    free (temp);
}

void DelEnd(Node* &head) {
    if (head == NULL)
        return;
    if (head->next == NULL) {
        delete head;
        head = NULL; 
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next=NULL; 
}

void DelAtPos(Node* &head, int pos){
    int count=1;
    if (pos==1){
        DelHead(head);
        return;
    }
    Node*temp=head;
    while (count<pos-1){
        temp=temp->next;
        count++;
    }
    if (temp==NULL|| temp->next==NULL){
        DelEnd(head);
        return;
    }
    Node* NodeToBeDeleted = temp->next;
    temp->next=NodeToBeDeleted->next;
    NodeToBeDeleted->next->prev=temp;
    delete NodeToBeDeleted;
}

void reversal (Node* &head){
    Node* back=NULL;
    Node* temp=head;
    while (temp!=NULL){
        Node* front= temp->next;
        temp->next=back;
        temp->prev=front;
        back=temp;
        temp=front;
    }
    head=back;
}

int main (){
    Node* head= new Node(10);
    Traversal(head);
    InsertAtHead(head, 0);
    Traversal(head);
    InsertAtEnd(head,20);
    Traversal(head);
    InsertAtPosition(head,2,5);
    Traversal(head);
    InsertAtPosition(head,1,2);
    Traversal(head);
    DelHead(head);
    Traversal(head);
    
    reversal(head);
    Traversal(head);
    return 0;
}
