# HackerRank Practice Problem
# AI > Probability & Stats > Day 2: Basic Probability Puzzles #2
library(MASS)
count = 0;

for (i in 1:6)
{
  for (j in 1:6)
  {
    if(i != j && (i + j) == 6)
    {
      count = count + 1
    }
  }
}

fractions(count/36)