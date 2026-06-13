//
// Created by gabri on 12/06/2026.
//

#include "mockData.h"


void mockData::inserirClientes(ClienteContainer& container) {
  for (size_t i = 0; i < nomeClientes.size(); i++) {
    int day = 1 + (rand() % 27);
