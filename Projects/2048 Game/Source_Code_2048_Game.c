//C Program to create a 2048 Game using the Data Structure - Arrays

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

int board[SIZE][SIZE];

//Initialises the Game Board in the form of memory
void initializeBoard() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = 0;
        }
    }
}

//Displays the Game Board
void printBoard() {
    int i, j;

    system("cls");

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", board[i][j]);
        }
        printf("\n");
    }

    printf("Enter move (w: up, s: down, a: left, d: right): ");
}

//Add 2 or 4 in any of the empty tiles
void addRandomTile() {
    int i, j;
    int emptyCells[SIZE * SIZE][2];
    int numEmptyCells = 0;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                emptyCells[numEmptyCells][0] = i;
                emptyCells[numEmptyCells][1] = j;
                numEmptyCells++;
            }
        }
    }

    if (numEmptyCells > 0) {
        int randomIndex = rand() % numEmptyCells;
        int randomValue = (rand() % 2 + 1) * 2;
        int x = emptyCells[randomIndex][0];
        int y = emptyCells[randomIndex][1];
        board[x][y] = randomValue;
    }
}

//Checks if the Game is Over or not
int isGameOver() {
    int i, j;

    // Check for 2048 tile
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (board[i][j] == 2048) {
                return 1;
            }
        }
    }

    // Check for empty cell
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                return 0;
            }
        }
    }

    // Check for neighboring cells with the same value
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1; j++) {
            if (board[i][j] == board[i][j + 1] || board[i][j] == board[i + 1][j]) {
                return 0;
            }
        }
    }

    return 1;
}

//Function to merge tiles into one
void mergeTiles(int row[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        //Adjacent tiles are same
        if (row[i] == row[i + 1]) {
            row[i] *= 2;
            row[i + 1] = 0;
        }
    }
}

//Function to shift the tiles left
void shiftTilesLeft(int row[], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        if (row[i] == 0) {
            for (j = i; j < size - 1; j++) {
                row[j] = row[j + 1];
            }
            row[size - 1] = 0;
        }
    }
}

//Function to instruct to move left
void moveLeft() {
    int i;
    for (i = 0; i < SIZE; i++) {
        mergeTiles(board[i], SIZE);
        shiftTilesLeft(board[i], SIZE);
    }
}

//Function to reverse
void reverse(int row[], int size) {
    int i, j, temp;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        temp = row[i];
        row[i] = row[j];
        row[j] = temp;
    }
}

//Function to transpose the board
void transposeBoard() {
    int i, j, temp;
    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            temp = board[i][j];
            board[i][j] = board[j][i];
            board[j][i] = temp;
        }
    }
}

//Function to instruct to move right
void moveRight() {
    int i;
    for (i = 0; i < SIZE; i++) {
        reverse(board[i], SIZE);
        mergeTiles(board[i], SIZE);
        shiftTilesLeft(board[i], SIZE);
        reverse(board[i], SIZE);
    }
}

//Function to instruct to move up
void moveUp() {
    transposeBoard();
    moveLeft();
    transposeBoard();
}

//Function to instruct to move down
void moveDown() {
    transposeBoard();
    moveRight();
    transposeBoard();
}

//Main function
int main() {
    srand(time(NULL));
    initializeBoard();
    addRandomTile();
    addRandomTile();
    printBoard();

    char move;
    while (1) {
        scanf(" %c", &move);

        if (move == 'a') {
            moveLeft();
        } else if (move == 'd') {
            moveRight();
        } else if (move == 'w') {
            moveUp();
        } else if (move == 's') {
            moveDown();
        } else {
            printf("Invalid move!\n");
            continue;
        }

        printf("\n");

        addRandomTile();
        printBoard();

        if (isGameOver()) {
            printf("Game Over!\n");
            break;
        }
    }

    return 0;
}