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

#ifndef DISTRO_ART_H
#define DISTRO_ART_H

#include <distro_art.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <fetch.h>

using namespace std;

class distro_art
{
    public:
        // retrieving OS name.
        string OS;
        string getOS();
        // art
        struct distart{
            string l1;
            string l2;
            string l3;
            string l4;
            string l5;
            string l6;
            string l7;
            string l8;
            string l9;
            string l10;
            string l11;
            string l12;
        };
};

#endif // DISTRO_ART_H
