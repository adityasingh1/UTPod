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

Song::Song(string _name)
{
    name = _name;
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

//destructor:

/*void Song::~Song(){

}*/


//overloads (==, >, <)
bool Song::operator ==(Song const &rhs){
    bool result = (name == rhs.name &&
                   artist == rhs.artist &&
                  size == rhs.size);
    return result;
}

//  >  :returns  1 if LHS>RHS w/ priority order artist, then name, then size.
//      returns  0 if LHS<RHS
//      returns -1 if LHS==RHS
bool Song::operator >(Song const &rhs)
{
    if(artist != rhs.artist){
        return artist > rhs.artist;
    }
    if(name != rhs.name){
        return name > rhs.name;
    }
    if(size != rhs.size){
        return size > rhs.size;
    }else{
        return -1; //error: song == rhs
    }
}

//  <  :returns  1 if LHS<RHS w/ priority order artist, then name, then size.
//      returns  0 if LHS>RHS
//      returns -1 if LHS==RHS
bool Song::operator <(Song const &rhs)
{
    if(artist != rhs.artist){
        return artist < rhs.artist;
    }
    if(name != rhs.name){
        return name < rhs.name;
    }
    if(size != rhs.size){
        return size < size;
    }else{
        return -1; //error: song == rhs
    }
}