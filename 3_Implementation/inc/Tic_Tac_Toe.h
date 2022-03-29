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
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
