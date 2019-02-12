Assignment 5
Elizabeth Kirschner & Linda Puzey

Running: 
To run this program you use the command: 
./PA5 gridSize #doodlebugs #ants #time_steps seed pause

Summary:
The program starts by checking for correct input parameters.  The program then creates thed board and populates it with the number of ants and doodlebugs given in the input parameters.  The program then plays the game. The game is played by calling the play round function which runs through the board and checks each cell for a ant, a doodlebug or blank, the play round function then calls the correct overloaded move function.  The move function for ants and doodlebugs works by checking surrounding squares for empty squares and then randomly chooses one to move to.  For doodlebugs, the move function first checks if there are ants in the surrounding squares and either eats an ant or, if no ants are present, the doodlebug looks for an random move.  If all surrounding squares are full the ant or doodlebug does not move.  If an ant or doodlebug survives 3 rounds they breed, and a new ant or doodlebug is placed in a randomly chosen adjacent square.  The board is made in the board class. Organisms in the board are maintained by the triple pointer gridspace, each item in gridspace is a double pointer to an organism. Every organism is either an ant or a doodlebug.  The board class can print boards and it also populates ants and doodlebugs.  
