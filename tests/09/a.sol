===============================================================================
 AAAAA  SSSSS TTTTT AAAAA  RRRRR   Zbigniew ROMANOWSKI  
 A   A  S       T   A   A  R   R                        
 AAAAA  SSSSS   T   AAAAA  RRRRR                        
 A   A      S   T   A   A  R  R    romz@wp.pl           
 A   A  SSSSS   T   A   A  R   R                        
===============================================================================

 This program solves 24-puzzle problem.
 It uses A* (A-star) with Manhattan metric to find the solution.
 Open set and closed set of A* are implemented as STL containers.
===============================================================================

SELECTED-BEGIN-STATE:
    1  2  3  4  5
    6  7  8    10
   16 11 14  9 15
   21 12 18 23 19
   17 22 20 13 24

Computing......Ok

STATISTICS:
  Astar::LoopNo = 8226

  OpenSetHash::Search.... = 18382
  OpenSetHash::Add....... = 17909
  OpenSetHash::Best...... = 8226
  OpenSetHash::RemoveBest = 8225
  OpenSetHash::IsEmpty... = 8226
  OpenSetHash::Update.... = 335
  OpenSetHash::Erase..... = 1
  OpenSetHash::Size...... = 0
  OpenSetHash::Collision. = 7

  ClosedSetHash::Search....... = 26950
  ClosedSetHash::Add.......... = 8225
  ClosedSetHash::Erase........ = 1
  ClosedSetHash::Size......... = 0
  ClosedSetHash::Collisions... = 0


FINAL-NUMBER-OF-STATES:
   Closed-set... = 8225
   Open-set..... = 9684

NUMBER-OF-STATES-IN-FOUND-PATH = 32

FOUND-MOVES:
 9 14 18 23 19 24 13 20 22 17 
21 16 11 12 17 22 23 19 24 13 
20 24 13 15 14 13 19 18 13 14 
15 20 