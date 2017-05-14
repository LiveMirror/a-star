#include "statep25.h"

// X-coordinates for tiles 
const char StateP25::m_coorX[StateP25::TILENO] = {
	0, 1, 2, 3, 4,
	0, 1, 2, 3, 4,
	0, 1, 2, 3, 4,
	0, 1, 2, 3, 4,
	0, 1, 2, 3, 4};

// Y-coordinates for tiles 
const char StateP25::m_coorY[StateP25::TILENO] = {
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 1,
	2, 2, 2, 2, 2,
	3, 3, 3, 3, 3,
	4, 4, 4, 4, 4};

// Label of tiles. 
const char* const StateP25::m_label[TILENO] = {
	"  ", " 1", " 2", " 3", " 4",
	" 5", " 6", " 7", " 8", " 9",
	"10", "11", "12", "13", "14",
	"15", "16", "17", "18", "19",
	"20", "21", "22", "23", "24"};


//
// Constructor, Default
//
StateP25::StateP25(void)
{
	for(int i = 0; i < TILENO; i++)
		m_tab[i] = 0;
}

//
// Constructor
// "tab" defines the initial state
//
StateP25::StateP25(const char* tab)
{
	for(int i = 0; i < TILENO; i++)
		m_tab[i] = tab[i];
}




//
// Less operator
//
bool StateP25::operator<(const StateP25& s) const
{
	for(int i = 0; i < TILENO; i++)
	{
		if(m_tab[i] < s.m_tab[i])
			return true;

		if(m_tab[i] > s.m_tab[i])
			return false;
	}
	return false;
}

//
// Prints state in formated form on the screan
//
void StateP25::Print(FILE* out) const
{
const char* const p = m_tab;

fprintf(out, 
	"   %s %s %s %s %s\n"
	"   %s %s %s %s %s\n"
	"   %s %s %s %s %s\n"
	"   %s %s %s %s %s\n"
	"   %s %s %s %s %s", 
	Lab( 0), Lab( 1), Lab( 2), Lab( 3), Lab( 4),
	Lab( 5), Lab( 6), Lab( 7), Lab( 8), Lab( 9),
	Lab(10), Lab(11), Lab(12), Lab(13), Lab(14),
	Lab(15), Lab(16), Lab(17), Lab(18), Lab(19),
	Lab(20), Lab(21), Lab(22), Lab(23), Lab(24));
}

//
// Returns position of SPACE
//
char StateP25::SpaceIdx(void) const
{
char i = 0;

	for(; i < TILENO; i++)
	{
		if(m_tab[i] == 0)
			break; 
	}
	assert(i < TILENO); // SPACE must be!
	return i;
}

//
// Prints the difference between "this" state and "next" state. 
//
void StateP25::PrintDiff(const StateP25& next) const
{
// Name of moves
static const char * const moveName[4] = {"Right", "Left", "Up", "Down"};
const char sp = SpaceIdx();
char m;

	if((sp + 1) < TILENO && next.IsSpace(sp + 1))
		m = 0; // Right
	else if((sp - 1) >= 0 && next.IsSpace(sp - 1))
		m = 1; // Left
	else if((sp - WIDTH) >= 0 && next.IsSpace(sp - WIDTH))
		m = 2; // Up
	else
	{
		assert(sp + WIDTH < TILENO);
		assert(next.IsSpace(sp + WIDTH));
		m = 3; // Down
	}

	// printf("  Next move: '%s' %s\n\n", next.Lab(sp), moveName[m]);
	printf("%s ", next.Lab(sp));
}
