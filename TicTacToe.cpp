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

void DisplayBoard(std::string** my2DArray){
  for (int h = 0; h < 3; h++){
    for (int w = 0; w < 3; w++){
      std::cout << my2DArray[h][w];
    }
    std::cout << std::endl;
  }
}

void PlaceMarker(int row, int col, std::string marker, std::string** my2DArray){
  my2DArray[row][col] = marker;
} 


int main(){
  std::string** my2DArray = CreateBoard();
  DisplayBoard(my2DArray);
  return 0;
}
