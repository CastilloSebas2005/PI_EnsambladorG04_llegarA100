// Copyright [2024] <Sebastian Orozco Castillo>

#include <random>
#include <iostream>

#include "playerComputer.h"

uint8_t playerComputer::generateNumber(uint8_t counter) {
  uint8_t numberGenerated = analizeCounter(counter);
  std::cout << "Numero generado " << (int)numberGenerated << std::endl;
  if (!numberGenerated) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10);
    return dis(gen);
  }
  return numberGenerated;
}
