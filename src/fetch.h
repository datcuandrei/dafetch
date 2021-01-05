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

#define VERSION "0.1"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <distro_art.h>

using namespace std;

#ifndef FETCH_H
#define FETCH_H


class fetch
{
    public:
        void fetchInfo(string loc);
        void searchInfo(string loc,string substring,int fErase,int eErase);

};

#endif // FETCH_H
