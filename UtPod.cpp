//
// Created by Aditya Singh on 10/30/18.
//

#include "UtPod.h"
#include <iostream>
#include "song.h"

// constructors


UtPod::UtPod(){
    head = nullptr;
    memory = DEFAULT_MEMORY;
}

UtPod::UtPod(int _memory){
    head = nullptr;
    memory = _memory;
}

// methods

void UtPod::swap(Node *Node1, Node *Node2) {
    Node *temp;
    temp->s = Node1->s;         //copy Node1 into temp
    temp->next = Node1->next;
    Node1->s = Node2->s;        //copy Node2 into Node1
    Node1->next = Node2->next;
    Node2->s = temp->s;         //copy temp into Node2
    Node2->next = temp->next;

}

bool UtPod::addSong(Song s){   //needs to calculate and return result

    Node *temp;
    temp = new Node;
    temp->s = s;
    temp->next = head;
    head = temp;


}

bool UtPod::removeSong(Song s){   //needs to calculate and return result, needs to traverse list
    Node *temp;
    Node *p = head;
    while (p != nullptr) {
        if(p->s == s){
            temp = p;
            head = p->next;
            delete temp;
        }
        p = p->next;
    }

}

void UtPod::shuffle(){
    unsigned int currentTime =  (unsigned)time(0);
    srand(currentTime);
    while(){
    }

}

void UtPod::showSongList() const{
    Node *p;

    while (p != nullptr)
    {
        cout << head->s.getName() << "by" << head->s.getArtist() << endl;
        p = p->next;
    }

}

void UtPod::sortSongList()
{
    while (head->next != nullptr)
    {
        if (head->s > head->next->s)
        {
            swap(head, head->next);
        }
        head = head->next;
    }
}



int UtPod::getTotalMemory() const{

    return(memory);

}

int UtPod::getRemainingMemory() const {
    int memoryTaken = 0;
    Node *p = head;

    while (p != nullptr) {
        memoryTaken = memoryTaken + p->s.getSize();
        p = p->next;
    }

    int memoryLeft = memory - memoryTaken;
    if (memoryLeft < 0) {
        return (0);
    } else {
        return (memoryLeft);
    }

}

//destructor:

UtPod::~UtPod(){
    Node* temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

}











