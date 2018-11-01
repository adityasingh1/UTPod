/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "song.h"
#include "UtPod.h"

using namespace std;



int main(int argc, char *argv[]) {
    ifstream inFile;
    string filename;
    filename = argv[1];
    int totalSize = atoi(argv[2]);
    inFile.open(filename, ios::in);
    char answer;
    char result;
    if (!inFile) {
        cerr << "Can't open input file " << inFile << endl;
        exit(1);
    }


    UtPod t(totalSize);

    string artist, songname;
    int size;
    while (!inFile.eof()) {
        inFile >> artist >> songname >> size;
        Song s(artist, songname, size);
        result = t.addSong(s);
        cout << "Memory left after adding song = " << t.getRemainingMemory() << endl;
    }

    cout << "All Songs Added, Showing Song List:" << endl;

    t.showSongList();

    cout << "Press Space to Test Shuffling" << endl;

    cin >> answer;

    if (answer == ' ') {
        t.shuffle();
    }

    cout << "Showing Song List" << endl;

    t.showSongList();

    cout << "Press Space to Test Sorting" << endl;

    cin >> answer;

    if (answer == ' ') {
        t.sortSongList();
    }

    cout << "Showing Song List" << endl;

    t.showSongList();

    cout << "memory left = " << t.getTotalMemory() << endl;

    cout << "Press Space to Remove Songs" << endl;

    cin >> answer;

    if (answer == ' ') {
        while (!inFile.eof()) {
            inFile >> artist >> songname >> size;
            Song s(artist, songname, size);
            result = t.removeSong(s);
            t.showSongList();
            cout << "Memory left after removing song = " << t.getRemainingMemory() << endl;
        }
    }

    cout << "Removed All Songs" << endl;

}



/*


cout << "Want to remove a song?" << endl;
cin >> answer;

while (answer == 'Y') {

    string songnameT;

    cout << "What's the song called? " << endl;

    getline(cin, songnameT);

    string artistT;

    cout << "Who's the artist? " << endl;

    getline(cin, artistT);

    int sizeT;

    cout << "What's the size of the song? " << endl;

    cin >> sizeT;

    Song temp(songnameT, artistT, sizeT);

    result = t.removeSong(temp);
    if(result){
        cout << "Success" << endl;

    } else{
        cout << "Failure" << endl;
    }

    t.showSongList();

    cout << "memory left = " << t.getRemainingMemory() << endl;

    cout << "Want to remove another song?" << endl ;
    cin >> answer;
}

t.shuffle();

t.showSongList();

t.sortSongList();

t.showSongList();

cout << "Would you like to add a song?" << endl;
cin >> answer;

while (answer == 'Y') {

    string songnameT;

    cout << "What's the song called? " << endl;

    getline(cin, songnameT);

    string artistT;

    cout << "Who's the artist? " << endl;

    getline(cin, artistT);

    int sizeT;

    cout << "What's the size of the song? " << endl;

    cin >> sizeT;

    Song temp(songnameT, artistT, sizeT);

    t.addSong(temp);

    t.showSongList();

    cout << "memory left = " << t.getRemainingMemory() << endl;

    cout << "Would you like to add another song?" << endl;
    cin >> answer;
}
}
*/



/*



    Song s1("Beatles", "Hey Jude1", 4);


    Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;


    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();


    cout << "memory = " << t.getRemainingMemory() << endl;


}

*/
