/*
	swgames  -	SW definition of games

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

	Modification History:
			84-02-08	Development
			87-03-09	Microsoft compiler.
			2003-01-27	GNU General Public License
			2020-04-10  Convert code to ANSI C
*/

#include	"sw.h"

/* @formatter:off */

GAMES swgames[1] = {
    {
		{1270,	588,	1330,	1360,	1630,	1660,	2456,	1720},   // gm_x
		{0,	0,	0,	0,	1,	1,	1,	1},                                  // gm_orient

	NULL, // gm_randf function
	7491, // gm_rseed
	NULL, // gm_specf function

	// gm_xtarg 20
		{191,	284,	409,	539,	685,
		807,	934,	1210,	1240,	1440,
		1550,	1750,	1780,	2024,	2159,
		2279,	2390,	2549,	2678,	2763},

	// gm_ttarg 20
		{1,	3,	1,	1,	3,
		0,	1,	2,	0,	3,
		3,	0,	2,	1,	1,
		3,	3,	0,	0,	1}
    }
};

/* @formatter:on */
