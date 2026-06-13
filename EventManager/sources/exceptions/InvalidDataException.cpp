//
// Created by gabri on 13/06/2026.
//

#include "InvalidDataException.h"

InvalidDataException::InvalidDataException(const string& data) {
  this->data = "Erro: ["+ data + "] não é valido! ";;
  }

  const char* InvalidDataException::what() {
    return data.c_str();
  }

