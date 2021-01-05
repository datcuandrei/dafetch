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

using namespace std;

/*
    function that gets the os name and stores it inside
    the "OS" string.
*/

string distro_art::getOS(){
    ifstream readOS;
    readOS.open("/usr/lib/os-release");
    while(getline(readOS, OS)){
        return OS;
        readOS.close();
    }
}
/*
    function that sets the art accordingly to the distro
    found.
*/
struct distro_art::distart dist(){
    struct distro_art::distart art;
    distro_art os;
    if(os.getOS().find("Debian") != string::npos){
        art.l1 = "     `-/o+///:.   ";
        art.l2 = "    -o/.`   `-s+  ";
        art.l3 = "   -o`  `.``  .s  ";
        art.l4 = "   /-   :     -/  ";
        art.l5 = "   :/   .-...-.   ";
        art.l6 = "    //    ``      ";
        art.l7 = "     -:-          ";
        art.l8 = "       `.`        ";
        art.l9 = "                  ";
        art.l10 = "                  ";
        art.l11 = "                  ";
        art.l12 = "                  ";
    }
    else if(os.getOS().find("Arch") != string::npos){
        art.l1 = "         :-            ";
        art.l2 = "        -oo-           ";
        art.l3 = "       .+ooo-          ";
        art.l4 = "      -+/+ooo-         ";
        art.l5 = "     -+ooooooo:        ";
        art.l6 = "   `/oss/../sss+`      ";
        art.l7 = "  `+ssso    +sso/`     ";
        art.l8 = " .oso+/-    -/+oo+.    ";
        art.l9 = "./-`            `-/.   ";
        art.l10 = "                       ";
        art.l11 = "                       ";
        art.l12 = "                       ";
    }
    else if(os.getOS().find("Fedora") != string::npos){
        art.l1 = "    ./shdmmdhs/.       ";
        art.l2 = "  -ymmmmmdo:--/dy:     ";
        art.l3 = " ommmmmmy` /ssyhhdo    ";
        art.l4 = "+mmmmmmm- +mmmmdhdm+   ";
        art.l5 = "dmmmmdyy- /yyddhhdmd   ";
        art.l6 = "mmdhh/``  ``.ohdmmmd   ";
        art.l7 = "mdhdmmmm- +mmmmmmmm+   ";
        art.l8 = "mhhdmmmd. ommmmmmms    ";
        art.l9 = "mmhy:::` /mmmmmmh/``   ";
        art.l10 = "+dmds+osdmmdhs+. `-`   ";
        art.l11 = "                       ";
        art.l12 = "                       ";
    }
    else if(os.getOS().find("Solus") != string::npos){
        art.l1 = "     `+:////-.         ";
        art.l2 = "   :oy./yyyyyyy/`      ";
        art.l3 = " .syy/  -yyyyyyyy/     ";
        art.l4 = "`yyy+    :ssyyyyyy/    ";
        art.l5 = "+yy+     .y.-oo+oyy`   ";
        art.l6 = "+y/      `y:  /s. /:   ";
        art.l7 = ":+``      y-   -o::    ";
        art.l8 = " :sssssoo+o/::///:`    ";
        art.l9 = "  `:///////+++++-      ";
        art.l10 = "    `.://+//:-`        ";
        art.l11 = "                       ";
        art.l12 = "                       ";
    }
    else if(os.getOS().find("Mint") != string::npos){
        art.l1 = "     ``-:///////:-``      ";
        art.l2 = "   `.://///////////:.`    ";
        art.l3 = "   :/- -//:-..-...://:    ";
        art.l4 = "  -//- -/: `:` .:. ://-   ";
        art.l5 = "  ///- -/: ./. :/- -///   ";
        art.l6 = "  ///- -/: ./. :/- -///   ";
        art.l7 = "  -//- .//:///://. -//-   ";
        art.l8 = "   ://.```````````.//:    ";
        art.l9 = "   `.://///////////:.`    ";
        art.l10 = "     ``-:///////:-``      ";
        art.l11 = "                          ";
        art.l12 = "                          ";
    }
    else if(os.getOS().find("Manjaro") != string::npos){
        art.l1 = "oooooooooooooooo  ooooooo   ";
        art.l2 = "oooooooooooooooo  ooooooo   ";
        art.l3 = "oooooooddddddddd  ooooooo   ";
        art.l4 = "ooooooo  yyyyyyy  ooooooo   ";
        art.l5 = "ooooooo  ooooooo  ooooooo   ";
        art.l6 = "ooooooo  ooooooo  ooooooo   ";
        art.l7 = "ooooooo  ooooooo  ooooooo   ";
        art.l8 = "ooooooo  ooooooo  ooooooo   ";
        art.l9 = "ooooooo  ooooooo  ooooooo   ";
        art.l10 = "ooooooo  ooooooo  ooooooo   ";
        art.l11 = "                            ";
        art.l12 = "                            ";
    }
    else if(os.getOS().find("Void") != string::npos){
        art.l1 = "       `.-:::::-.`          ";
        art.l2 = "       .::-...-::::-`       ";
        art.l3 = "   -+.          `.:::.      ";
        art.l4 = "  -sss`   `.-.`   `:::`     ";
        art.l5 = "oMMdso:odNsoNMsdMydMhomMd   ";
        art.l6 = " +MNh/ yMhohmydMhyMNsyNh:   ";
        art.l7 = "  .sss.   `...`   `:::`     ";
        art.l8 = "   -sss/.          `-`      ";
        art.l9 = "    `/ssss+///+ss:          ";
        art.l10 = "       -/+ossso+/-          ";
        art.l11 = "                            ";
        art.l12 = "                            ";
    }
    else if(os.getOS().find("SUSE") != string::npos){
        art.l1 = "            =77777777777777,+777         ";
        art.l2 = "         777777777777777777777777=,7     ";
        art.l3 = "       7777777777777777777777777,7.77    ";
        art.l4 = "     777777777777777777777777?77,77,77   ";
        art.l5 = "   7777777777777777777777777777,,7777    ";
        art.l6 = "  I777I,,,777777777777777777777777777+   ";
        art.l7 = "  77I,,777,,,77777777777777:  :I=        ";
        art.l8 = "  77,77~.I77,,7777     ~777              ";
        art.l9 = "  77,I777.,7=,,777      +77              ";
        art.l10 = "  777.,7+,77:                            ";
        art.l11 = "   777777777                             ";
        art.l12 = "      777?                               ";
    }
    else if(os.getOS().find("Gentoo") != string::npos){
        art.l1 = "            ````              ";
        art.l2 = "        `.````.---.           ";
        art.l3 = "       .`     ...--:-`        ";
        art.l4 = "      .-     -+s:.---:-`      ";
        art.l5 = "      -s+:.`  `....-----.     ";
        art.l6 = "       -oyo-    ``.....:+`    ";
        art.l7 = "        `.      ````.:oy:     ";
        art.l8 = "      `-`     ````-/yy+`      ";
        art.l9 = "      :..`````.-/shy:`        ";
        art.l10 = "      /o/::/+oyyy/.           ";
        art.l11 = "      `:syyys+:`              ";
        art.l12 = "                              ";
    }
    else if(os.getOS().find("Ubuntu") != string::npos){
        art.l1 = "                  -oo+`       ";
        art.l2 = "          `/+oooo.shhh/       ";
        art.l3 = "       `-/--ooooo+://:.       ";
        art.l4 = "      `/++/.`    `-+ooo:      ";
        art.l5 = "   `.`-/+/`         /ooo-     ";
        art.l6 = "  -ooo/.+-           :::-     ";
        art.l7 = "  .+oo--+:          .hhh+     ";
        art.l8 = "      -+++-        -yhhy`     ";
        art.l9 = "       -/+/.:/--:/shyhs.      ";
        art.l10 = "        `-.+hhhhhs--:-`       ";
        art.l11 = "           .:////.:+++-       ";
        art.l12 = "                  `--.        ";
    }
    else if(os.getOS().find("Pop!_OS") != string::npos){
        art.l1 = "      .-://+++//:-.         ";
        art.l2 = "   `:/+/:--:/++++++/:`      ";
        art.l3 = "  -++-` `.   .++++++++-     ";
        art.l4 = " /+++`  .+/   :+/::/+++/    ";
        art.l5 = "-++++/.  ./` `/+`  -++++-   ";
        art.l6 = "/+++++/.   `-/+/  .+++++/   ";
        art.l7 = "/+++++++.  -+++/ -++++++/   ";
        art.l8 = "-++++++++-  :++::+++++++-   ";
        art.l9 = " /++++++++:.:+/.:++++++/    ";
        art.l10 = "  -+++.```````````.+++-     ";
        art.l11 = "   `:///////////////:`      ";
        art.l12 = "      .-://+++//:-.         ";
    }
    else{
        art.l1 = "       `smmh:       ";
        art.l2 = "       :os+sh       ";
        art.l3 = "       /:`./m.      ";
        art.l4 = "     `+s    od+`    ";
        art.l5 = "     ys`     sho    ";
        art.l6 = "   `.+/-    .os+`   ";
        art.l7 = "   -  `o.  `-   -   ";
        art.l8 = "   .```./::+.`..`   ";
        art.l9 = "                    ";
        art.l10 = "                    ";
        art.l11 = "                    ";
        art.l12 = "                    ";
    }
    return art;
}

