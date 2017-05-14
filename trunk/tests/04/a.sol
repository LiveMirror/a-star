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
       6  2  9  4
   17  1  3 10 14
   22  8  7 12  5
   21 11 18 13 24
   16 23 15 20 19

Computing.............100..........200..........300.........Ok

STATISTICS:
  Astar::LoopNo = 369543

  OpenSetHash::Search.... = 838236
  OpenSetHash::Add....... = 820223
  OpenSetHash::Best...... = 369543
  OpenSetHash::RemoveBest = 369542
  OpenSetHash::IsEmpty... = 369543
  OpenSetHash::Update.... = 10103
  OpenSetHash::Erase..... = 1
  OpenSetHash::Size...... = 0
  OpenSetHash::Collision. = 11336

  ClosedSetHash::Search....... = 1220770
  ClosedSetHash::Add.......... = 369542
  ClosedSetHash::Erase........ = 1
  ClosedSetHash::Size......... = 0
  ClosedSetHash::Collisions... = 4281


FINAL-NUMBER-OF-STATES:
   Closed-set... = 369542
   Open-set..... = 450681

NUMBER-OF-STATES-IN-FOUND-PATH = 52

FOUND-MOVES:
 6  1 17  6  1  2  3  7 12 10 
14  5 10 12  8 11 21 22 11 17 
 7  8 12 13 20 19 24 20 19 15 
23 21 22 16 21 22 17 12 13 19 
15 24 20 15 19 14  9  4  5 10 
15 20 