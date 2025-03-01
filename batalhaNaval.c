
// Funcao para fazer o tabuleiro
void printBoard(int board[10][10]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}


int main() {

    int board[10][10] = {0}; 
    

    // Posiciona um navio horizontalmente (linha 2, colunas 3 a 5)
    board[2][3] = 3;
    board[2][4] = 3;
    board[2][5] = 3;
   

    // Posiciona um navio verticalmente (coluna 7, linhas 5 a 7)
    board[5][7] = 3;
    board[6][7] = 3;
    board[7][7] = 3;

    printBoard(board);
}