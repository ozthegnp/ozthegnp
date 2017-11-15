#include <iostream>

using namespace std;

// Create a linked list using classes.
// If you are not similar whit linked lists look it up on the internet.
// Feel free to walk through some tutorials, get familiar with your implementation.

class List {
private:
   typedef struct node {
        int data;
        node* next;
    } * nodePtr;


    nodePtr head;
    nodePtr curr;
    nodePtr temp;

public:
    List(){
        head = NULL;
        curr = NULL;
        temp = NULL;
    };

    void addNode(int addData){
        nodePtr n = new node;
        n->next = NULL;
        n->data = addData;

        if(head != NULL){
            curr = head;
            while(curr->next != NULL){
                curr = curr->next;
            }
            curr->next = n;
        } else{
            head = n;
        }
    }

    void deleteNode(int delData){

        nodePtr delPtr = NULL;
        temp = head;
        curr = head;

        while(curr != NULL && curr->data != delData){
            temp = curr;
            curr = curr->next;
        }

        if(curr == NULL){

            cout << delData << " was not in the list" << endl;
            delete delPtr;

        } else{
            delPtr = curr;
            curr = curr->next;
            temp->next = curr;
            if(delPtr == head){
                head = head->next;
                temp = NULL;
            }
            delete delPtr;
            cout << "The value " << delData << " was deleted" << endl;

        }
    }

    void PrintList(){
        curr = head;
        while(curr != NULL) {
            cout << curr->data << endl;
            curr = curr->next;
        }
    }

};

int main()
{
    List ls;

    ls.addNode(23);
    ls.addNode(54);
    ls.addNode(90);
    ls.addNode(7);

    ls.PrintList();

    ls.deleteNode(1);
    ls.deleteNode(23);
    ls.PrintList();

    return 0;
}
