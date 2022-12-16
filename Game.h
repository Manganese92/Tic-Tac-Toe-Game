char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void computerMove();
void playerMove();
char checkWin();
void printWinner(char);

