//
// Created by Aditya Singh on 10/30/18.
//

#ifndef UTPOD_UTPOD_H
#define UTPOD_UTPOD_H

#include <string>

using namespace std;

class UtPod {

private:
    *Node head;
    int memory;
    static const int DEFAULT_TOTAL_MEMORY = 512;

    void Swap(*Node Node1, *Node Node2);

public:

    // Constructors
    UtPod();

    UtPod(int _memory);

    //methods

    bool addSong(Song s)

    bool removeSong(Song s)

    void shuffle()

    void showSongList() const

    void sortSongList()

    int getTotalMemory() const

    int getRemainingMemory() const

    // Destructor
    ~UtPod();


};


#endif //UTPOD_UTPOD_H




