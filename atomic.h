/*
  Stockfish, a UCI chess playing engine derived from Glaurung 2.1
  Copyright (C) 2004-2008 Tord Romstad (Glaurung author)
  Copyright (C) 2008-2015 Marco Costalba, Joona Kiiski, Tord Romstad
  Copyright (C) 2015-2016 Marco Costalba, Joona Kiiski, Gary Linscott, Tord Romstad

  Stockfish is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Stockfish is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ATOMIC_H_INCLUDED
#define ATOMIC_H_INCLUDED

////////////////////////////////////////////////

// atomic move generation
#define ATOMIC

// atomic evaluation
#define ATOMIC_EVAL

// atomic time management
#define ATOMIC_TIMEMAN

// atomic options
#define ATOMIC_OPTIONS

// uci extensions
#define UCI_EXTENSIONS

////////////////////////////////////////////////

#ifdef ATOMIC_EVAL

extern int ATOMIC_MOBILITY_MULTIPLIER;

extern int ATOMIC_GAME_PHASE_FACTOR;

extern int ATOMIC_PASSED_PAWN_FACTOR;

#endif

#endif // #ifndef ATOMIC_H_INCLUDED