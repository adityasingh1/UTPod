

#include "UtPod.h"
#include <iostream>

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
    if(s.getSize() > getRemainingMemory()){
        return false;
    }
    temp->s = s;
    temp->next = head;
    head = temp;
    return true;
}

bool UtPod::removeSong(Song s){
    Node *temp;
    Node *p = head;

    if(head == nullptr){          //this is the case that there are no nodes in the list, returns error
        return false;
    }
    if(head->s == s){             //this is the case that the top node is the one we want to remove
        temp = head;
        head = head->next;
        delete temp;
    }
    while (p != nullptr) {        //this is the case that it is not the top node
        if(p->next->s == s){
            temp = p->next;
            head = p->next->next;
            delete temp;
        }
        p = p->next;
    }
    return true;
}

void UtPod::shuffle(){
    unsigned int currentTime =  (unsigned)time(0);
    srand(currentTime);
    Node* ptr1 = head;
    Node* ptr2;
    Node* ctrptr = head;
    int numSongs = 0;

    while(ctrptr != nullptr){             //count the number of nodes in the list -- should we implement as a function?
        numSongs++;
        ctrptr = ctrptr->next;
    }

    while(ptr1 != nullptr){
        ptr2 = ptr1;
        int random = (rand() % numSongs);   //select a random index to swap to
        for(int i = 0; i < random; i++){
            if(ptr2->next != nullptr) {     //traverse through the list random number of times, rolling over if you hit null
                ptr2 = ptr2->next;
            }else{
                ptr2=head;
            }
        }
        swap(ptr1, ptr2);                  //swap current position to current position + random
        ptr1 = ptr1 -> next;               //move ptr1 to next 'unshuffled' element (it may have already been shuffled and placed there)

    }

}

void UtPod::showSongList() const{
    Node *p = head;

    while (p != nullptr)
    {
        cout << p->s.getName() << "by" << p->s.getArtist() << endl;
        p = p->next;
    }

}

void UtPod::sortSongList()   //this needs to be changed to not fuck up head
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











