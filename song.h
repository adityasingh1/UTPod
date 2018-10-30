//
// Created by Tyler Stern on 10/28/18.
//

#ifndef SONG_H
#define SONG_H

#include <string>


using namespace std;

class Song {

private:
    string name;
    string artist;
    int size;

    static const int DEFAULT_SIZE = 0;

public:
    //constructors
    Song();
    Song(string name);
    Song(string _name, string _artist);
    Song(string _name, string _artist, int _size);


    //get and set instance variables (name, artist, size)
    string getName() const;
    void setName(string n);
    string getArtist() const;
    void setArtist(string a);
    int getSize() const;
    void setSize(int n);

    //destructor
    ~Song(Song &s);
};



#endif SONG_H
