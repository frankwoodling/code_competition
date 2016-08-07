# HackerRank Practice Problem
# AI > Probability & Stats > Day 1: Standard Deviation Puzzles #1

largest = -10
set_a = c(1, 2, 3)
set_b = c(1, 2, 3, 0)

min = 0
max = 4

num_range = seq(from = min, to = max, by = .01)


for (i in 1:length(num_range))
{
  set_b[4] =  num_range[i]
  #print(sd(set_b))
  
  if (round(sd(set_a), digits = 2) == round(sd(set_b), digits = 2))
  {
    largest = num_range[i]
  }
}

largest

