// Copyright 2024 [Sebastian Orozco Castillo]

#ifndef PLAYERCOMPUTER_H
#define PLAYERCOMPUTER_H

#include <cstdint>

#include "playerModel.h"

/// @brief Funcion que se va a enviar a ensamblador
/// @param counter Estado del contador
/// @return Numero generado por el programa en ensamblador
extern "C" uint8_t analizeCounter(uint8_t counter);

/// @brief Clase que va a manejar el jugador Computadora
class playerComputer: public playerModel
{
public:
    /// @brief Constructor
    /// @param ID Identificador del jugador
    playerComputer(char ID);

    /// @brief Funcion que va a generar el numero que se le va a sumar al contador
    /// @param counter Estado actual del contador
    /// @return Numero generado por la funcion en ensamblador que lo analiza
    uint8_t generateNumber(uint8_t counter);
};

#endif  // PLAYERCOMPUTER_H
