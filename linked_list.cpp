//  Linked List implementation based (pretty much equal) on the one presented in class

#include <iostream>

using namespace std;
template <class T> 

class LinkedList {
    private:
        struct Node{
            T data;
            Node *next;
        }*p;
        size_t listSize;
    public:
        LinkedList();
        size_t size() const;
        void insertBegin(T value);
        void insertEnd(T value);
        bool insertAfter(size_t index, T value);
        bool remove(T value);
        void clear();
        void display() const;
        ~LinkedList();
};

//////////////////////////////////////////////////////////////////////////////////////////////
template <class T> 
LinkedList<T>::LinkedList(){
    listSize = 0;  // every list starts empty
    p = nullptr;  // empty = no node to point to
}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
size_t LinkedList<T>::size() const{
    return listSize;
}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void LinkedList<T>::insertBegin(T value){
    Node *q = new Node;  // new first element
    q->data = value;
    q->next = p;  // previous first element's adress (or nullptr) stored in the new one
    p = q;  // p stores the adress to the new first element
    listSize++;
}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void LinkedList<T>::insertEnd(T value){
    Node *q, *t;

    if (p == nullptr){  // in case there aren't any elements yet (insert first element)
        p = new Node;
        p->data = value;
        p->next = nullptr;
        listSize++;
    }
    else{
        // run through all adresses and make q = last one
        q = p;
        while(q->next != nullptr)
            q = q->next;
        t = new Node;
        t->data = value;
        t->next = nullptr;
        q->next = t;
        listSize++;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool LinkedList<T>::insertAfter(size_t index, T value){
    return false;  // while it isn´t finished
}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool LinkedList<T>::remove(T value){
    return false;  // while it isn´t finished
}
/////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void LinkedList<T>::clear(){
    Node *q;
    if (p == nullptr)  // already empty
        return;
    while (p != nullptr){  // alternatively ---> while (listSize != 0)
        q = p->next;
        delete p;
        p = q;
        listSize--;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void LinkedList<T>::display() const{
    Node *q;
    if (p == nullptr)  // empty list
        cout << "Linked List is empty" << endl;
    else{
        q = p;
        while (q != nullptr){
            cout << q->data << ' ';
            q = q->next;
        }
        cout << endl;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
LinkedList<T>::~LinkedList(){
    clear();
}
//////////////////////////////////////////////////////////////////////////////////////////////

// test
int main(){
    LinkedList<int> l1;
    for (int i = 1; i < 11; i++){
        l1.insertEnd(i);
    }
    l1.display();
    return 0;
}