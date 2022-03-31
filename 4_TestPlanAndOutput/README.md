# Test plan and Test output
## Test plan

Test cases are decided with the help of
* Decision cases
* Play_board cases
* Play_rules cases
* Checktowin cases
     
     In this project, the rules will be displayed first. You can press any key so that it will display 1. start the game 2. leaderboard of the game. 
     Players has to enter their name.Player 1 will be given the chance of choosing either x or o. Then, the game starts. Players has to place the x or o in the empty        places of the 3x3 playboard grid.
     Player who gets a combination of 3 same characters either diagonal or horizontally or vertically will be the winner of the game. 
     The leaderboard will be displayed in order to show the winner of the game.
 ## Test output
  *  Play_rules cases- Display the rules of the game
  *  Decision cases- Player1 will choose either x or o
  *  Play_board cases- Display the playboard of the Tic-Tac-Toe game
  *  Checktowin cases- Display the winner of the game
 # Test Plan
 ## High Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
| -------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| H_01 | Check if the rules of the game is displayed properly | Program execution | Rules displayed | Rules displayed | Requirement |
| H_02 | Not Stuck inside any Function | Function call | Proper function execution with return type and message | Proper function execution with return type and message | Requirement |
| H_03 | Check whether the leaderboard is properly displayed | Score collection | Leaderboard displayed | Leaderboard displayed | Requirement |
| H_04 | Check whether the winner is displayed properly | Same charactors obtained | Winner displayed | Winner displayed | Requirement |

## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
| -------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| L_01 | Check if the name of the players is displayed properly | Enter player name | Player name displayed | Player name displayed | Requirement |
