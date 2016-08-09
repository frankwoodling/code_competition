# HackerRank Practice Problems
# Algorithms > Dynamic Programming > Fibonacci Modified

#data <- suppressWarnings(readLines(file("stdin")))

f <- file("stdin")
open(f)
data <- c()
while(length(line <- readLines(f,n=1, warn = FALSE)) > 0) {
  data <- c(data, line)
}


t1 = data[1]
t2 = data[2]
n = data[3]

v = c(t1, t2)


for(i in 1:n)
{
  v = c(v, (v[i]+v[i+1]^2)) 
}

##cat(v[n], sep="\n") 

print(v[n])




















#############################################
# HackerRank Practice Problems
# Algorithms > Dynamic Programming > Fibonacci Modified

# t1 <- readline(prompt="Enter first value: ")
# t2 <- readline(prompt="Enter second value: ")
# n <- readline(prompt="Enter an length of array: ")

data <- suppressWarnings(readLines(file("stdin")))


# t1 = 0
# t2 = 1
# n = 5

t1 = strtoi(t1)
t2 = strtoi(t2)
n = strtoi(n)

v = c(t1, t2)


for(i in 1:n)
{
  v = c(v, (v[i]+v[i+1]^2)) 
}

v[n]
