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

int GetPlayerChoice(){
  std::string choice;
  std::cout << "What is your choice?" << std::endl;
  getline(std::cin, choice);
  return stoi(choice);
}

void PlaceMarker(int row, int col, std::string marker, std::string** my2DArray){
  my2DArray[row][col] = marker;
}


int main(){
  std::string** my2DArray = CreateBoard();
  DisplayBoard(my2DArray);
  std::string player = "X";
  for(int i = 0; i < 9; i++){
    std::cout << "row:" << std::endl;
    int row = GetPlayerChoice();
    std::cout << "col:" << std::endl;
    int col = GetPlayerChoice();
    PlaceMarker(row, col, player, my2DArray);
    if(player == "X"){
      player = "O";
    }else{
      player = "X";
    }
    DisplayBoard(my2DArray);
  }
  std::cout << "Game Over" << std::endl;
  return 0;
}
