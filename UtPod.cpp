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



}

void UtPod::shuffle(){


}

void UtPod::showSongList() const{


}

void UtPod::sortSongList(){


}

int UtPod::getTotalMemory() const{


}

int UtPod::getRemainingMemory() const{



}

//destructor:

*void UtPod::~UtPod(){


}











