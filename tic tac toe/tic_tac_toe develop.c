#include <stdio.h>
#include <stdbool.h>
// Function to print the Tic Tac Toe board
void printBoard(char board[3][3]) {
printf("\n");
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf(" %c ", board[i][j]);
if (j < 2)
printf("|");
}
if (i < 2)
printf("\n---|---|---\n");
}
printf("\n");
}
