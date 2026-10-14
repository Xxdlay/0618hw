#pragma once
#include <iostream>
#include "Laptop.h"
#include "Playlist.h"

using namespace std;

int main() {
    Laptop laptop("Lenovo", 999.99);
    laptop.info();

    Playlist pl(2);
    pl.addSong("Track 1");
    pl.show();

    return 0;
}