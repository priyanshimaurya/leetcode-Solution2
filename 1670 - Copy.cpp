#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int v) {
        val = v;
        next = NULL;
        prev = NULL;
    }
};

class Doublell {
public:
    Node* head;
    Node* tail;

    Doublell() {
        head = NULL;
        tail = NULL;
    }

    void pushFront(int val) {
        Node* newnode = new Node(val);

        if (head == NULL) {  
            head = newnode;
            tail = newnode;
        } else {
            newnode->next = head;  
            head->prev = newnode;  
            head = newnode;        
        }
    }

    void pushBack(int val) {
        Node* newnode = new Node(val);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    int popBack() {
        if (tail == NULL) {
            return;
        }
        if (head == tail) {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    int pushMiddle(int val) {
        Node* newnode = new Node(val);

        if (head == NULL) {
            pushFront(val);
            return;
        }

        if (head == tail) {
            pushBack(val);
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        newnode->next = slow->next;
        newnode->prev = slow;

        if (slow->next != NULL) {
            slow->next->prev = newnode;
        } else {
            tail = newnode;
        }

        slow->next = newnode;
    }

    int popFront() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
    }

    int popMiddle() {
        if (head == NULL) {
            return; 
        }

        if (head == tail) {
            delete head; 
            head = NULL;
            tail = NULL;
            return;
        }

        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        if (prev != NULL) {
            prev->next = slow->next;
        }

        if (slow->next != NULL) {
            slow->next->prev = prev;
        } else {
            tail = prev;
        }

        delete slow;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Doublell dl;
    dl.pushFront(1);
    dl.pushBack(2);
    dl.pushMiddle(3);
    dl.pushMiddle(4);
    dl.popFront();
    dl.popMiddle();
    dl.popMiddle();
    dl.popBack();
    dl.popFront();
    dl.printList();  
    return 0;
}
