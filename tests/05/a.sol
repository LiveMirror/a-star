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
    2  3  7  9  4
   11  1 14  5 10
   12 17 15 19  8
   22  6 13    23
   16 21 18 24 20

Computing.............100..........200..........300.........Ok

STATISTICS:
  Astar::LoopNo = 362714

  OpenSetHash::Search.... = 802153
  OpenSetHash::Add....... = 779229
  OpenSetHash::Best...... = 362714
  OpenSetHash::RemoveBest = 362713
  OpenSetHash::IsEmpty... = 362714
  OpenSetHash::Update.... = 11269
  OpenSetHash::Erase..... = 1
  OpenSetHash::Size...... = 0
  OpenSetHash::Collision. = 10102

  ClosedSetHash::Search....... = 1181448
  ClosedSetHash::Add.......... = 362713
  ClosedSetHash::Erase........ = 1
  ClosedSetHash::Size......... = 0
  ClosedSetHash::Collisions... = 4062


FINAL-NUMBER-OF-STATES:
   Closed-set... = 362713
   Open-set..... = 416516

NUMBER-OF-STATES-IN-FOUND-PATH = 48

FOUND-MOVES:
19  8 10  5  8 15 14  8  9  4 
 5 10 15 14 17  6 22 12 11  1 
 6 17  8  7  3  2  1 11 12 16 
21 22 17 12 11  6  7  8 13 19 
23 20 24 23 19 18 23 24 