/**
 * @file Tic_Tac_Toe.h
 * @author Soundarya V ()
 * @brief Tic-Tac-Toe Game
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

#include <stdio.h>
#include<string.h>

/**
*  two player plays the game and winner will be announced
* @param[in] player1 
* @param[in] player2 
* @return Result of the game
*/
int decision();

/**
*  player 1 will choose first either X or O 
*/
void play_board();

/**
* display the playboard of the Tiac-Tac-toe game
*/
void play_rules();

/**
* display the rules of the Tic-Tac-Toe game
*/
int checktowin();

#endif  /* #define __TIC_TAC_TOE_H__ */
