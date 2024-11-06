// Copyright 2024 [Sebastian Orozco Castillo]

#ifndef PLAYERMODEL_H
#define PLAYERMODEL_H

/// @brief Clase abstracta para los jugadores
class playerModel {
public:
  /// @brief Constructor para las clases abstractas
  /// @param ID Identificador del jugador, solamente para controlar los turnos
  playerModel(char ID) : id(ID) {}

  /// @brief Obtener el identificador del jugador
  /// @return id
  char getID() { return id; }

private:
  /// @brief Identificador
  char id;
};

#endif // PLAYERMODEL_H
