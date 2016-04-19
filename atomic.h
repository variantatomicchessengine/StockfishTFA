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

extern int ATOMIC_MOBILITY_DIVISOR;

extern int ATOMIC_GAME_PHASE_FACTOR;

extern int ATOMIC_PASSED_PAWN_FACTOR;

#endif

const int MAX_MOVES = 256;
const int MAX_PLY   = 128;

enum Value : int {
  VALUE_ZERO      = 0,
  VALUE_DRAW      = 0,
  VALUE_KNOWN_WIN = 10000,
  VALUE_MATE      = 32000,
  VALUE_INFINITE  = 32001,
  VALUE_NONE      = 32002,

  VALUE_MATE_IN_MAX_PLY  =  VALUE_MATE - 2 * MAX_PLY,
  VALUE_MATED_IN_MAX_PLY = -VALUE_MATE + 2 * MAX_PLY,

#ifndef ATOMIC_EVAL

  // default Stockfish piece values

  PawnValueMg   = 198,   PawnValueEg   = 258,
  KnightValueMg = 817,   KnightValueEg = 896,
  BishopValueMg = 836,   BishopValueEg = 907,
  RookValueMg   = 1270,  RookValueEg   = 1356,
  QueenValueMg  = 2521,  QueenValueEg  = 2658,

  MidgameLimit  = 15581, EndgameLimit  = 3998

#else

  PawnValueMg   = 250,   PawnValueEg   = 500,
  KnightValueMg = 600,   KnightValueEg = 600,
  BishopValueMg = 600,   BishopValueEg = 600,
  RookValueMg   = 800,   RookValueEg   = 1200,
  QueenValueMg  = 1400,  QueenValueEg  = 2400,

  MidgameLimit  = 15581, EndgameLimit  = 3998

#endif

};

#endif // #ifndef ATOMIC_H_INCLUDED