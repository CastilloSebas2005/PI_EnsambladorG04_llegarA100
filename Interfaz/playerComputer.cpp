#include <iostream>
#include <random>

#include "playerComputer.h"

playerComputer::playerComputer(char ID) : playerModel(ID) {}

uint8_t playerComputer::generateNumber(uint8_t counter) {
  uint8_t numberGenerated = analizeCounter(counter);
  std::cout << "Numero generado " << numberGenerated << std::endl;
  if (!numberGenerated) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10);
    return dis(gen);
  }
  return numberGenerated;
}