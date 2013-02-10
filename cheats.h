/*
   unGEST Game Boy emulator
   copyright 2013 taizou

   Based on GEST
   Copyright (C) 2003-2010 TM

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#ifndef CHEATS_H
#define CHEATS_H

#include "types.h"
#include "debug.h"

const int MAXGGCHEATS = 10;

struct gg_cheats
{
   char str[12];
   byte new_value;
   byte old_value;
   unsigned short address;
   int long_code;
};

extern gg_cheats cheat[];
extern int number_of_cheats;

extern char gg_cheat_values[23];

int rol_l(int number,int count);
bool add_cheat(char* cheat_str);
void remove_cheat(int index);

#endif
