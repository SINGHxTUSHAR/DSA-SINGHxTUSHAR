/**************************************************************
* Doubly linked list implementation
* Insertion of the node at beginning, end, at specific position
* Deletion of any node from any position
* printing the length and linked list 
****************************************************************/


#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *prev;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;

        //memeory released
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is released for the data value: "<<value<<endl;
    }

};

//Method to insert the node at the beginning
void InsertAtHead(Node* &head, Node* &tail, int d){

    //empty list
    if(head == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    //already some node was present
    else{
        //creating a new node
        Node *temp = new Node(d);

        temp->next = head;
        head->prev = temp;
        head = temp;
    }  
}

//Method to insert the node at the last
void InsertAtTail(Node* &head, Node* &tail, int d){
    
    //empty list
    if(tail == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else{
         Node *temp = new Node(d);

         tail->next = temp;
         temp->prev = tail;
         tail = temp;
    }
    
}

//Method to add the node at a specific position
void InsertAtPositon(Node* &head, Node* &tail, int position, int d){

    //temp is a pointer used to traverse
    Node *temp = head;
    int cnt = 1;
     
    //inserting at the first position
     if(position == 1){
        InsertAtHead(head, tail, d);
        return ;
    }
    
    //traversing to the position at which node should be insert
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at the last position
    if(temp->next == NULL){
        InsertAtTail(head, tail, d);
        return ;
    }

    //creating a node to hold the d , nodeToInsert is pointer holding the data
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    (temp->next)->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;   
}

//Traversing and Method to print the data of the linked list
void print(Node* &head){
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

//Method to get the length of the linked list
int getLength(Node* &head){
    int len = 0;
    Node *temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;

}

//Method to delete any node at any position
void DeleteNode(Node* &head, Node* &tail, int position){
    //deleting the first node
    if(position == 1){
        //creating a temporary pointer and pointing it to head
        Node *temp = head;

        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        //releasing the memory of temp or the first node
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
        curr->prev = NULL;
        prev->next = curr->next;

        //releasing the memory 
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    // //creation of an object to the instance of the class
    // Node *node1 = new Node(10);

    //creating the head pointer pointing to the first node
    Node *head = NULL;

    //creating the tail pointer
    Node *tail = NULL;

    print(head);

    InsertAtHead(head, tail, 65);
    print(head);

    InsertAtTail(head, tail, 97);
    print(head);

    InsertAtTail(head, tail, 105);
    print(head);

    InsertAtTail(head, tail, 967);
    print(head);

    InsertAtPositon(head, tail, 3, 999);
    print(head);

    InsertAtPositon(head, tail, 6, 852);
    print(head);

    InsertAtPositon(head, tail, 7, 12);
    print(head);

    cout<<endl;
    
    //printing the lenghth of the linked list
    cout<<"The length of the linked list is: "<<getLength(head)<<endl;

    cout<<endl;

    DeleteNode(head, tail, 5);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;


    return 0;
}