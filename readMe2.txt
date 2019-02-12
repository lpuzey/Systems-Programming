Life.c -- Linda Puzey

Readme

Summary of Program:
This program is used to play the game of life. It's John Conway's the game of life and not the fun board game. The program starts with the include statements, <stdio.h>, in order to use print and scan functions, <stdlib.h>, in order to use the EXIT statements. The next part is the main function to run all of my helper functions, declare variables, check for optional arguments, and a for loop that deals with the doPause and doPrint. Everything in the main() function is used to print things on the terminal. My first helper function, populate(), takes in the first 2D array, plus the rows and columns, then it populates that 2D array with all o's. Next we have printGrid(), which has two for loops that actually goes through the 2D array and actually prints it. After is my function, xPop(), which goes through the input file and then will print your actual x's in the array. It also calculates maxRows and maxColumns to help center it later. Next is center(), which has a simple algorithm to move the x's to be in the center of a grid. After is compare(), which has two for loops that go through and check if two 2D arrays are equal to each other. CalcNeighbors() is my largest function that calculates if a cell is alive and how many neighbors it has. In addition, it applies the rules of the game of life. My last function nextGen() has two for loops that use the calcNeighbors() function and uses it to calculate the next generation. All these functions work together to play the game of life to the user's specifications.

How to Run this Program:
First you need to open up the up all the files in eclipse, including life.c and twoD.h. And you want to open up the terminal. If you put the files in any folder put the command in the terminal: cd foldername. Once you have done that, to run the program put the command: make into the terminal. That will compile the program. And to finally run it put in the command: ./life rows columns generations inputFile [print] [pause]. For rows, columns, and generation you need to put an integer. For the inputFile, it need to be one of the ones provided or one that you create yourself. Print will print out every single generation and Pause will have you press a button after each generation. To use these, you simply put a y in those places. This will produce the game of life with your specifications. 

Problems I Had:
1.Second Generation Problem: There was an issue I had where it would produce the first generation no problem, but the second generation would be incorrect. And then the third generation would not even print because it would say that it is the same as the previous generation. I found out that the problem was because I wasn't passing my next generation array before. To fix this I made a stand in array called temp. This fixed it because it was able to pass next correctly.
2.Rule problem: So I had an issue where my second generation was being produced wrong. I found out that the issue was because I used the rows variable instead of the columns variable for two of my if statements. 
3.Minor problems: I had other minor problem where I didn't set a pointer right or had some parentheses wrong. The main one that I got was "segmentation fault", which was easily fixed. 

Sources I used:
I didn't use any websites for help on this assignment. I just asked other people for help.

My friend, Andrew

Andrew helped me to start the program and gave me ideas of how to start the program and help with little problems I had in the beginning. 

My Dad

My dad helped me with bigger problems that I had and helped me to polish up my program. He actually really helped to explain things to me and motivated me to finish the program in a good amount of time. 

Loop Invariants:
For loop in main: gen>=0 && gen<gens, increases gen until it is greater than gens
For loop in populate1: i>=0 && i<rows, increases i until it is greater than rows
For loop in populate2: j>=0 && j<rows, increases j until it is greater than columns
For loop in printGrid1: i>=0 && i<rows, increases i until it is greater than rows
For loop in printGrid2: j>=0 && j<rows, increases j until it is greater than columns
For loop in center1: i>=0 && i<=maxRows, increases i until it is greater than maxrows
For loop in center2: j>=0 && j<=maxColumns, increases i until it is greater than maxcolumns
For loop in compare1: i>=0 && i<=rows, increases i until it is greater than rows
For loop in compare2: j>=0 && j<=columns, increases j until it is greater than columns
For loop in calcNeighbors1: i>=startR && i<=endR, increases i until it is greater than endR
For loop in CalcNeighbors2: j>=startC && j<=endC, increases i until it is greater than endC
For loop in nextGen1: i>=0 && i<=rows, increases i until it is greater than rows
For loop in nextGen2: j>=0 && j<=columns, increases j until it is greater than columns



