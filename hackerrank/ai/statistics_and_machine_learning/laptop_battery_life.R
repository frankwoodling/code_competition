# HackerRank Practice Problem
# AI > Statistics and Machine Learning > Laptop Battery Life

trainingdata <- read.csv("D:/Github/Code_Competition/hackerrank/ai/statistics_and_machine_learning/trainingdata.txt", header=FALSE)

lm(trainingdata[,1]~trainingdata[,2])

predict.lm()
-1.274+0.942*1.5
max(trainingdata[,2])
