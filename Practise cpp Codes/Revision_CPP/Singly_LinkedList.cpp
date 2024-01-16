/***************************************************************
* AUTHOR : TUSHAR SINGH
* Adding the new node at the beginning , end , specific-position
* Deletion of any node in the linked list
* Implementation of the node in the linked list
****************************************************************/

#include<iostream>
using namespace std;

class Node{

    public:
    int data;   //containing the data
    Node *next; //pointer pointing to the next node 
    
    //constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;

        //memeory released
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is released for the data value:-"<<value<<endl;
    }

};


//Method to insert the new node at the beginning
void InsertAtHead(Node* &head, int d){
    //new node creation
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//Method to insert the node at the end
void InsertAtTail(Node* &tail, int d) {
     //new node creation
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

//Method to add the node at a specific position
void InsertAtPositon(Node* &head, Node* &tail, int position, int d){
    //temp is a pointer used to traverse
    Node *temp = head;
    int cnt = 1;

    if(position == 1){
        InsertAtHead(head, d);
        return ;
    }

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at the last position
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }
    //creating a node to hold the d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//Method to delete any node at any position
void DeleteNode(Node* &head, int position){
    //deleting the first node
    if(position == 1){
        Node *temp = head;
        head = head->next;
        //releasing the memory
        temp->next = NULL;
        delete temp;
    }
    //deleting for any node at the middle or at the last
    else{
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        //traversing to the delete node position
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        //releasing the memory 
        curr->next = NULL;
        delete curr;
    }
}

//Method to print the Linked list
void print(Node* &head){
    //temp pointer pointing to the starting node
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;

}


int main(){

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(tail);

    InsertAtTail(tail, 56);
    print(head);

    InsertAtHead(head, 65);
    print(head);

    InsertAtTail(tail, 786);
    print(head);

    InsertAtHead(head, 89);
    print(head);

    InsertAtPositon(head, tail, 4, 99);
    print(head);

    InsertAtPositon(head, tail, 1, 2);
    print(head);

    InsertAtPositon(head, tail, 8, 1000);
    print(head);

    DeleteNode(head, 8);
    print(head);

    cout<<"Head:-"<<head->data<<endl;
    cout<<"tail:-"<<tail->data<<endl;

    return 0;
}