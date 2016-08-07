# HackerRank Practice Problem
# AI > Probability & Stats > Day 2: Basic Probability Puzzles #1

count = 0;

for (i in 1:6)
{
  for (j in 1:6)
  {
    if(i+j > 9)
    {
      count = count + 1
    }
  }
}

