//
// Created by Aditya Singh on 10/30/18.
//

#include "UtPod.h"

// constructors


UtPod::UtPod(){
    Node *head = NULL;
    memory = DEFAULT_MEMORY;
}

UtPod::UtPod(int _memory){
    Node *head = NULL;
    memory = _memory;
}

// methods

bool UtPod::addSong(Song s){
    struct Node {
        Song s;
        Node *next;
    };

    *Node temp = new Node;
    temp->s = s;
    temp->next = head;
    head = temp;

}

bool UtPod::removeSong(Song s){
    *Node temp;
    while (head != NULL) {
        if(head->s = s){
            temp = head;
            head = head->next;
            delete temp;
        }
    }

}

void UtPod::shuffle(){


}

void UtPod::showSongList() const{
    while (head != NULL)
    {
        cout << head->s << endl;
        head = head->next;
    }

}

void UtPod::sortSongList(){


}

int UtPod::getTotalMemory() const{

    return(memory);

}

int UtPod::getRemainingMemory() const {
    int memoryTaken = 0;
    while (head != NULL) {
        memoryTaken = memoryTaken + head->s.size;
        head = head->next;
    }
    int memoryLeft = memory - memoryTaken;
    if (memoryLeft < 0) {
        return (0);
    } else {
        return (memoryLeft);
    }

}

//destructor:

*void UtPod::~UtPod(){

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

}











