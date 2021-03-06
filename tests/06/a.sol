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
    6  1  8  3  4
   11 15  2  5 10
    7 19    20  9
   16 18 12 23 14
   21 13 17 22 24

Computing.............100..........200..........300..........400..........500..........600..........700..........800..........900..........1000..........1100..........1200..........1300..........1400..........1500..........1600..........1700..........1800..........1900..........2000..........2100..........2200..........2300..........2400..........2500..........2600..........2700..........2800..........2900..........3000..........3100..........3200..........3300..........3400..........3500..........3600..........3700..........3800..........3900..........4000..........4100..........4200..........4300..........4400..........4500..........4600..........4700..........4800..........4900..........5000..........5100..........5200..........5300...Ok

STATISTICS:
  Astar::LoopNo = 5302525

  OpenSetHash::Search.... = 12311593
  OpenSetHash::Add....... = 11986034
  OpenSetHash::Best...... = 5302525
  OpenSetHash::RemoveBest = 5302524
  OpenSetHash::IsEmpty... = 5302525
  OpenSetHash::Update.... = 216703
  OpenSetHash::Erase..... = 1
  OpenSetHash::Size...... = 0
  OpenSetHash::Collision. = 3974217

  ClosedSetHash::Search....... = 17857895
  ClosedSetHash::Add.......... = 5302524
  ClosedSetHash::Erase........ = 1
  ClosedSetHash::Size......... = 0
  ClosedSetHash::Collisions... = 1223709


FINAL-NUMBER-OF-STATES:
   Closed-set... = 5302524
   Open-set..... = 6683510

NUMBER-OF-STATES-IN-FOUND-PATH = 48

FOUND-MOVES:
20  9 10  5  9 20 19 15  2  8 
 3  4  5 10 20 19 15 18 13 17 
22 23 14 20 19 15 18  7 11  6 
 1  2  7 13 12 18 13 12 17 22 
23 24 20 19 15 14 19 20 