//
// Created by Lord Foog on 5/17/2026.
//
/*#include <list>
#include "ClienteService.h"
#include "ClienteMapper.h"

using namespace std;

ClienteService::ClienteService(IClienteRepository * repo) {
    this->repo = repo;
}

void ClienteService::add(const ClienteInDTO & obj){
    Cliente * model = this->repo->getModel();
    ClienteContainer& container = model->getClienteContainer();
    container.add(obj.name, obj.birthday.day,obj.birthday.month, obj.birthday.year);
}

void ClienteService::getAll(list<ClienteOutDTO>& dtos) {
    Cliente *model = this->repo->getModel();
    ClienteContainer &container = model->getClienteContainer();
    list<Cliente *> Clientes = container.getAll();
    ClienteMapper::listModel2listDTO(Clientes, dtos);
}

void ClienteService::get(int number, ClienteOutDTO & obj) {
    Cliente *model = this->repo->getModel();
    ClienteContainer &container = model->getClienteContainer();
    Cliente * Cliente = container.get(number);
    ClienteMapper::model2DTO(Cliente, obj);
}

void ClienteService::remove(int number, ClienteOutDTO &obj) {
    Cliente *model = this->repo->getModel();
    ClienteContainer &container = model->getClienteContainer();
    Cliente * Cliente = container.get(number);
    EnrollContainer &enroll_container = model->getEnrollContainer();
    list<tuple<Subject *, int>> enroll = enroll_container.get(number);
    if(enroll.empty()) {
        ClienteMapper::model2DTO(Cliente, obj);
    }
    else{
        string msg = "Cliente: " + to_string(number);
        throw DataConsistencyException(msg);
    }
}

void ClienteService::update(int number, ClienteInDTO &obj) {
    Cliente *model = this->repo->getModel();
    ClienteContainer &container = model->getClienteContainer();
    Cliente * Cliente = container.get(number);
    container.update(number, obj.name, obj.birthday.day,obj.birthday.month, obj.birthday.year);
}