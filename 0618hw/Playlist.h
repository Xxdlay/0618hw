#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Playlist {
private:
    char** songs;
    int capacity;
    int count;

public:
    Playlist(int maxSongs) {
        capacity = maxSongs;
        count = 0;
        songs = new char* [capacity];
    }

    ~Playlist() {
        for (int i = 0; i < count; i++) {
            delete[] songs[i];
        }
        delete[] songs;
    }

    void addSong(const char* songName) {
        if (count < capacity) {
            songs[count] = new char[strlen(songName) + 1];
            strcpy_s(songs[count], strlen(songName) + 1, songName);
            count++;
        }
    }

    void show() const {
        for (int i = 0; i < count; i++) {
            cout << songs[i] << endl;
        }
    }
};