#ifndef REGIONNODE
#define REGIONNODE
#include <iostream>
#include <string>


class Node
{
private:
    int letter;
    Node *prev;
    Node *next;
public:
    Node();
    Node(int letter, Node *prev, Node *next);
    int getLetter();
    Node *getPrev();
    void setPrev(Node *prev);
    Node *getNext();
    void setNext(Node *next);
        
};

#endif