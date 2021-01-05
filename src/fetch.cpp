/*
    Copyright (C) 2021  Andrei Datcu.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#define VERSION "0.2"

#include <distro_art.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <fetch.h>

using namespace std;

/*
    function that simply reads everything
    found in a file
*/

void fetch::fetchInfo(string loc){
    ifstream read;
    read.open(loc);
    string output;
    while(getline(read, output)){
        cout << "\033[1;37m" << output << "\033[0m";
    }
    read.close();
}

/*
    function that reads a file and loops through every line
    until it finds the required substring and erases the
    text between set indexes
*/

void fetch::searchInfo(string loc,string substring,int fErase,int eErase){
    ifstream file(loc);
    string text;
    while(getline(file, text)){
        if(text.find(substring) != string::npos){
            text.erase(fErase,eErase);
            cout << "\033[1;37m" << text << "\033[0m";
        }
    }
}
