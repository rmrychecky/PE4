#include <iostream>

std::string** CreateBoard(){
  std::string ** board = 0;
  board = new std::string *[3];
  for(int h=0; h < 3; h++){
    board[h] = new std::string[3];
    for(int w =0; w < 3; w++){
      board[h][w] = " ";
    }
  }
  return board;
}

void DisplayBoard(std::string arr[3][3]){
  for(int i = 0; i < 3; i++){
    for(int x = 0; x < 3; x++){
      std::cout << arr[i][x];
    }
    std::cout << std::endl;
  }
}


int main(){
  CreateBoard();
  return 0;
}
