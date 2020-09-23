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

void DisplayBoard(std::string** array){
  for (int h = 0; h < 3; h++){
    for (int w = 0; w < 3; w++){
      std::cout << array[h][w];
    }
    std::cout << std::endl;
  }
}

int main(){
  std::string** my2DArray = CreateBoard();
  DisplayBoard(my2DArray);
  return 0;
}
