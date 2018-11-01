//
// Created by Aditya Singh on 10/30/18.
//

#ifndef UTPOD_UTPOD_H
#define UTPOD_UTPOD_H

#include <string>
#include "song.cpp"

typedef struct Node {
    Song s;
    struct Node *next;
} Node;


using namespace std;

class UtPod {

private:

    int memory;
    Node* head;
    static const int DEFAULT_MEMORY = 512;

    void swap(Node *Node1, Node *Node2);

public:

    // constructors

    UtPod();

    explicit UtPod(int _memory);

    // methods

    bool addSong(Song s);

    bool removeSong(Song s);

    void shuffle();

    void showSongList() const;

    void sortSongList();

    int getTotalMemory() const;

    int getRemainingMemory() const;

    // destructors

    ~UtPod();

};

#endif //UTPOD_UTPOD_H













