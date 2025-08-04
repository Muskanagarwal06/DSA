#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next= NULL;
        }
};

class List{
    Node * head;
    Node * tail;
    public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){   //O(1)
        Node* newNode= new Node(val);
        if (head== NULL){
            head=tail=newNode;
        }else{
            //(*newNode).next=head;
            newNode -> next =head;
            head = newNode;
        }
    }

    void push_back(int val){    //O(1)
        Node * newNode= new Node(val);

        if (head==NULL){
            head=tail=newNode;
        }else{
            tail->next = newNode;
            tail= newNode;
        }
    }

    void print_ll(){       //O(n)
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void pop_front(){    //O(1)
        if (head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node * temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){       //O(n)
        if (head== NULL){
            cout<<"LL is empty\n";
            return ;
        }
        Node *temp =head;
        while(temp->next != tail){
            temp= temp->next;
        }
        temp -> next= NULL;
        delete tail;
        tail= temp;
    }
    
    void insert(int val , int pos){    //O(n)
        if (pos<0){
            cout<<"Invalid Position\n";
            return ;
        }
        if (pos==0){
            push_front(val);
            return ;
        }
        Node *temp =head;
        Node * newNode = new Node(val);
        for(int i=0 ; i<pos-1 ; i++){
            if (temp==NULL){
                cout<<"Invalid position\n";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key){         //O(n)
        Node * temp =head;
        int idx=0;
        while(temp!=NULL){
            if(temp-> data== key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

};
int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_back(6);
    ll.push_front(3);

    ll.print_ll();

    ll.pop_front();
    ll.pop_back();
    ll.insert(5,1);
    cout<<ll.search(5)<<endl;
    ll.print_ll();
}