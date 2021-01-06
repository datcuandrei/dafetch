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

#define VERSION "1.0"

#include <distro_art.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <fetch.h>
#include <sys/sysinfo.h>

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

/*
    function that retrieves the uptime and
    displays it correctly.this wouldn't have
    been possible without the help of a
    stackoverflow answer.if you are interested
    on what api to use and get the uptime :

    https://stackoverflow.com/questions/1540627/what-api-do-i-call-to-get-the-system-uptime

*/
void fetch::uptime(){
    struct sysinfo s_info;
    sysinfo(&s_info);
    long uptime_hours = s_info.uptime / 3600;
    long uptime_minutes = s_info.uptime / 60;
    long uptime_days = uptime_hours / 24;
    if (uptime_hours < 1){
        cout << "\033[1;37m" << uptime_minutes << " minutes" << "\033[0m";
    }
    else if(uptime_hours >= 24){
        cout << "\033[1;37m" << uptime_days << " days" << "\033[0m";
    }
    else{
        cout << "\033[1;37m" << uptime_hours << " hours" << "\033[0m";
    }
}
