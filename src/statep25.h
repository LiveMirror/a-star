#ifndef ASTAR_STATEP25_H
#define ASTAR_STATEP25_H

//
// AUTHOR: Zbigniew Romanowski
//         romz@wp.pl
// ***  PART OF A-STAR ALGORITHM  *** 
//
//
// ---------------------------------------------------------------------------------
//      D E S C R I P T I O N
// ---------------------------------------------------------------------------------
// 1. Represents state in Puzzle-25 game.
//
// 2. This class is directly related to GraphP25.
//
// 3. State is represented as an array of characters.
//
// 4. TILE numbering:
//    1  2  3  4  5
//    6  7  8  8 10
//   11 12 13 14 15
//   16 17 18 19 20
//   21 22 23 24 25
//

#include <cstring>
#include <cstdio>
#include <cassert>

class StateP25
{
public:
	// Type used to evaluate the heuristic and to evaluate the cost between two connected states.
	typedef int Cost;

public:
	// WIDTH: Width of the squared board
	// TILENO: Number of tiles on the board
	enum{WIDTH = 5, TILENO = WIDTH * WIDTH};


public:
	StateP25(void);
	explicit StateP25(const char* tab);

	bool operator==(const StateP25& s) const;
	bool operator< (const StateP25& s) const;

	char SpaceIdx(void) const;
	bool IsSpace(char sp) const;
	
	void Swap(char oldPos, char newPos);

	char X(char i) const;
	char Y(char i) const;

	void Print(FILE* out) const;
	void PrintDiff(const StateP25& next) const;

private:
	const char* Lab(char i) const;
	
private:
	// Tiles on the board
	char m_tab[TILENO];

private:
	// X-coordinates of the GOAL state
	static const char m_coorX[StateP25::TILENO];

	// Y-coordinates of the GOAL state
	static const char m_coorY[StateP25::TILENO];

	// Names of tiles on the board
	static const char* const m_label[TILENO];
};

//
// Returns "true", if on position "sp" is SPACE
//
inline
bool StateP25::IsSpace(char sp) const
{
	assert(sp >= 0 && sp < TILENO);
	return (m_tab[sp] == 0);
}

//
// Changes the positions of two tiles
//
inline
void StateP25::Swap(char oldPos, char newPos)
{
const char tmp = m_tab[newPos];

	m_tab[newPos] = m_tab[oldPos];
	m_tab[oldPos] = tmp;
}


//
// Returns label of i-th tile.
//
inline
const char* StateP25::Lab(char i) const
{
	return m_label[m_tab[i]];
}

//
// Returns X-coordinate of i-th tile
//
inline
char StateP25::X(char i) const
{
	return m_coorX[m_tab[i]];
}

//
// Returns Y-coordinate of i-th tile
//
inline
char StateP25::Y(char i) const
{
	return m_coorY[m_tab[i]];
}


//
// Equality operator
//
inline
bool StateP25::operator==(const StateP25& s) const
{
/*
	for(int i = 0; i < TILENO; i++)
	{
		if(m_tab[i] != s.m_tab[i])
			return false;
	}
	return true;
*/
	return (::memcmp(m_tab, s.m_tab, TILENO * sizeof(char)) == 0);
}

#endif

