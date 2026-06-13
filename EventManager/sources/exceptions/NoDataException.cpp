//
// Created by gabri on 13/06/2026.
//

#include "NoDataException.h"

NoDataException::NoDataException(const string& data){
  this->data = "Erro: ["+ data + "] não existe!";;
  }

  const char* NoDataException::what(){
    return data.c_str();
  }

