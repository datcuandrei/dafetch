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

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <fetch.h>
#include <distro_art.h>
#include <sys/sysinfo.h>

using namespace std;

/*
    function that displays color blocks at
    the very end of the output.
*/

void blocks(){
    // note that all colors are bold.
    cout << "\033[1;30m████\033[0m"; // black
	cout << "\033[1;31m████\033[0m"; // red
    cout << "\033[1;32m████\033[0m"; // green
	cout << "\033[1;33m████\033[0m"; // yellow
	cout << "\033[1;34m████\033[0m"; // blue
	cout << "\033[1;35m████\033[0m"; // magenta
	cout << "\033[1;36m████\033[0m"; // cyan
	cout << "\033[1;37m████\033[0m" << endl; // white
}

/*
    function that retrieves the uptime and
    displays it correctly.this wouldn't have
    been possible without the help of a
    stackoverflow answer.if you are interested
    on what api to use and get the uptime :

    https://stackoverflow.com/questions/1540627/what-api-do-i-call-to-get-the-system-uptime

*/
void uptime(){
    struct sysinfo s_info;
    sysinfo(&s_info);
    long uptime_hours = s_info.uptime / 3600;
    long uptime_minutes = s_info.uptime / 60;
    if (uptime_hours < 1){
        cout << "\033[1;37m" << uptime_minutes << " minutes" << "\033[0m";
    }
    else{
        cout << "\033[1;37m" << uptime_hours << " hours" << "\033[0m";
    }
}

/*
    some functions were put in comments.
    that is because they were taken in consideration and can be used,
    but other better alternatives were used.
    to use those,simply remove the comment and enter the one currently
    used in a comment.
*/

int main(void)
{
    // defining objects of other classes
    fetch fetchData;
    distro_art distro;
    struct distro_art::distart dist();
    /*
        to set a color for the text,we must first find out
        what distro the user is using,so the color is set
        accordingly.
    */
    string OS;
    string color;
    if (distro.getOS().find("Debian") != string::npos){
        color = "\033[1;31m";
        OS = "Debian";
    }
    else if (distro.getOS().find("Gentoo") != string::npos){
        color = "\033[1;34m";
        OS = "Gentoo Linux";
    }
    else if (distro.getOS().find("Arch") != string::npos){
        color = "\033[1;36m";
        OS = "Arch Linux";
    }
    else if (distro.getOS().find("Fedora") != string::npos){
        color = "\033[1;34m";
        OS = "Fedora";
    }
    else if (distro.getOS().find("Solus") != string::npos){
        color = "\033[1;34m";
        OS = "Solus";
    }
    else if (distro.getOS().find("Pop!_OS") != string::npos){
        color = "\033[1;36m";
        OS = "Pop!_OS";
    }
    else if (distro.getOS().find("Manjaro") != string::npos){
        color = "\033[1;32m";
        OS = "Manjaro Linux";
    }
    else if (distro.getOS().find("Mint") != string::npos){
        color = "\033[1;32m";
        OS = "Linux Mint";
    }
    else if (distro.getOS().find("Void") != string::npos){
        color = "\033[1;32m";
        OS = "Void Linux";
    }
    else if (distro.getOS().find("openSUSE") != string::npos){
        color = "\033[1;32m";
        OS = "openSUSE";
    }
    else if (distro.getOS().find("Ubuntu") != string::npos){
        color = "\033[1;33m";
        OS = "Ubuntu";
    }
    else{
        OS = "unknown";
    }
    // fetch host
    string usr = getenv("USER");
    cout << color << dist().l1 << "User : \033[0m" << "\033[1;37m" << usr << "\033[0m";
    // fetch OS info
    cout << color << "\n" <<  dist().l2 << "\Distro: \033[0m" << "\033[1;37m" << OS << "\033[0m";
    // fetch kernel info
    cout << color << "\n" <<  dist().l3 << "Kernel : \033[0m";
    fetchData.searchInfo("/proc/version","Linux version",30,500);
    // fetch uptime (lots of research on this one)

    cout << color << "\n" <<  dist().l4 << "Uptime : \033[0m";
    uptime();
    // fetch shell
    //system("echo SHELL : $0");
    string getShell = getenv("SHELL");
    string shell = getShell.erase(0,5);
    cout << color  << "\n" <<  dist().l5 << "Shell : \033[0m" << "\033[1;37m" << shell << "\033[0m";
    // fetch terminal
    string terminal = getenv("TERM");
    cout << color << "\n" << dist().l6 << "Terminal : \033[0m" << "\033[1;37m" <<terminal << "\033[0m";
    // fetch machine ID
    cout << color << "\n" <<  dist().l7 << "Machine ID : \033[0m";
    fetchData.fetchInfo("/etc/machine-id");
    // fetch CPU name
    //searchInfo("/proc/cpuinfo","model name",0,13);
    // fetch memory info
    cout << color << "\n" << dist().l8 <<"Memory : \033[0m";
    fetchData.searchInfo("/proc/meminfo","Active:",0,17);
    cout << " / ";
    fetchData.searchInfo("/proc/meminfo","MemTotal",0,17);
    cout << endl;
    cout << color << dist().l9 << "\033[0m" << endl;
    cout << color << dist().l10 << "\033[0m" << endl;
    cout << color << dist().l11 << "\033[0m";
    blocks();
    cout << color << dist().l12 << "\033[0m" << endl;
}
