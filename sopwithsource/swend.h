/*
    swend    -  SW end of game

    Copyright (C) 1984-2003 David L. Clark.
    Copyright (C) 2020 Pavel Vasilyev.

    This program is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any later
    version. This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
    or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
    more details. You should have received a copy of the GNU General Public
    License along with this program; if not, write to the Free Software Foundation,
    Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

            Author: Dave Clark
                    Pavel Vasilyev
*/

#ifndef SWEND_H
#define SWEND_H

#include "sw.h"

void swend( char *msg, BOOL update );
void endgame( int targclr );
void winner( OBJECTS *obp );
void loser( OBJECTS *ob );
void swreport(void);

#endif // SWEND_H
