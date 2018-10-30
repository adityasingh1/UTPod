//
// Created by Tyler Stern on 10/28/18.
//

#include "song.h"



//4 different constructors; we'll likely only ever use the last one
Song::Song()
{
    name = "";
    artist = "";
    size = DEFAULT_SIZE;
}

Song::Song(string name)
{
    this->name = name;
    artist = "";
    size = DEFAULT_SIZE;
}

Song::Song(string _name, string _artist){
    name = _name;
    artist = _artist;
    size = DEFAULT_SIZE;
}

Song::Song(string _name, string _artist, int _size)
{
    name = _name;
    artist = _artist;
    size = _size;
}


//get and set instance variables (name, artist, size)
string Song::getName() const {
    return name;
}
void Song::setName(string n) {
    name = n;
}
string Song::getArtist() const {
    return artist;
}

void Song::setArtist(string a) {
    artist = a;
}
int Song::getSize() const {
    return size;
}

void Song::setSize(int n) {
    name = n;
}

