//
// AUTHOR: Zbigniew Romanowski
//         romz@wp.pl
//
//
// ---------------------------------------------------------------------------------
//      D E S C R I P T I O N
// ---------------------------------------------------------------------------------
// 1. Demonstration program of A-STAR algorithm.
//
// 2. It finds the solution for 25-Puzzle game for selected initial positions.
//
// 3. Selected positions are sorted according to lenth of searched state space.
//
// 4. Two GiB of memory is required for 0,1,2,3,4,6 configurations.
//
// 5. Sixteen GiB of memory is required for 6-th configuration.
//


// This must be defined befor including "astar.h"
#define ASTAR_STATISTICS

#include "astar.h"
#include "graphp25.h"
#include <iostream>


void Intro(FILE* out);
void RunAstar( const StateP25& beg );

int main(int argc, char* argv[])
{
    Intro( stdout );

    if( argc != 2 )
    {
        std::cout << "Invalid number of parameters.\n";
        std::cout << "Provide file name for the initial state\n";
        return 1;
    }


    StateP25 beg;
    beg.Read( argv[ 1 ] );

    RunAstar( beg );
	
	return 0;
}


void RunAstar( const StateP25& beg )
{
    Astar<GraphP25> as;
    GraphP25 graph;
    StateP25::Cost cost;
    std::vector<StateP25> path;
    bool pathFound;


	printf("SELECTED-BEGIN-STATE:\n");
	beg.Print(stdout);
	printf("\n\nComputing...");

	pathFound = as.Find(graph, beg, path, cost);
	if(!pathFound)
	{
		printf("Path NOT found for START state:\n");
		beg.Print(stdout);
		return;
	}
	printf("...Ok\n");
	const size_t stateNo = path.size();
	as.PrintStats(stdout);

	printf("\nFINAL-NUMBER-OF-STATES:\n"
		"   Closed-set... = %d\n"
		"   Open-set..... = %d\n\n",
		as.ClosedNo(), as.OpenNo());

	printf("NUMBER-OF-STATES-IN-FOUND-PATH = %d\n\n", stateNo - 1);

	printf("FOUND-MOVES:\n");
	for(size_t i = 0; i < stateNo; i++)
	{
		if(i < stateNo - 1)
			path[i + 1].PrintDiff(path[i]);

		if((i+1) % 10 == 0)
			printf("\n");
	}

	
	printf("\n\nCALCULATION-TIME = %d second(s)\n\n", as.FindTime());
	// printf("\n***** Calculations completed successfully! *****\n\n");
}


void Intro(FILE* out)
{
	fprintf(out,
		"\n\n\n"
		"===============================================================================\n"
		" AAAAA  SSSSS TTTTT AAAAA  RRRRR   Zbigniew ROMANOWSKI,   romz@wp.pl           \n"
		" A   A  S       T   A   A  R   R                                               \n"         
		" AAAAA  SSSSS   T   AAAAA  RRRRR                                               \n"
		" A   A      S   T   A   A  R  R    version: 1.0                                \n"    
		" A   A  SSSSS   T   A   A  R   R   compilation date: %s (%s)                   \n"
		"===============================================================================\n\n"
		" This program solves 24-puzzle problem.\n"
		" It uses A* (A-star) with Manhattan metric to find the solution.\n"
		" Open set and closed set of A* are implemented as STL containers.\n"
		" For demonstration purpose, exemplary begin states are provided.\n"
		"\n"
		"  STATE-ID     NUMBER-OF-MOVES    CLOSED-SET    OPEN-SET      \n"
		"--------------------------------------------------------------\n"
		"    0          15 (very easy)           29            34      \n"
		"    1          30 (easy)             3 130         4 250      \n"
		"    2          42                   38 685        44 242      \n"
		"    3          52                  369 542       450 681      \n"
		"    4          48                  362 713       416 516      \n"
		"    5          ?? (very hard)                                 \n"
		"===============================================================================\n\n",
		__DATE__, __TIME__);
}

