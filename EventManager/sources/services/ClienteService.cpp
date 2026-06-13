//
// Created by Lord Foog on 5/17/2026.
//

#include <list>
#include <cctype>
#include "ClienteService.h"
#include "ClienteMapper.h"
#include "DataConsistencyException.h"
#include "InvalidDataException.h"
#include "DuplicatedDataException.h"

using namespace std;

ClienteService::ClienteService(IGestoraEventosRepository* repo) {
    this->repo = repo;
}

void ClienteService::add(const ClienteInDTO & obj){
    if (obj.nome.length() <= 3 || obj.nome.length() > 20)
        throw InvalidDataException("nome (deve ter entre 4 e 20 caracteres)");

    size_t arrobaPos = obj.email.find('@');
    size_t pontoPos  = obj.email.rfind('.');
    if (arrobaPos == string::npos || pontoPos == string::npos
        || arrobaPos == 0 || pontoPos <= arrobaPos
        || pontoPos >= obj.email.length() - 1)
        throw InvalidDataException("email");

    int letters = 0, digits = 0;
    for (char c : obj.password) {
        if (isalpha((unsigned char)c)) letters++;
        else if (isdigit((unsigned char)c)) digits++;
    }
    if (letters < 6 || digits < 3)
        throw InvalidDataException("password (minimo: 6 letras e 3 digitos)");

    GestoraEventos *model = this->repo->getModel();
    ClienteContainer& container = model->getClientes();
    container.add(obj.nome, obj.email, obj.password);
}

void ClienteService::getEventos(list<Evento*>& eventos) {
    GestoraEventos *model = this->repo->getModel();
    EventoContainer &container = model->getEventos();
    eventos = container.getAll();
}

void ClienteService::getAll(list<ClienteOutDTO>& dtos) {
    GestoraEventos *model = this->repo->getModel();
    ClienteContainer &container = model->getClientes();
    list<Cliente *> Clientes = container.getAll();
    ClienteMapper::listModel2listDTO(Clientes, dtos);
}

void ClienteService::getClienteByID(string ID, ClienteOutDTO & obj) {
    GestoraEventos *model = this->repo->getModel();
    ClienteContainer &container = model->getClientes();
    Cliente * Cliente = container.getClienteByID(ID);
    ClienteMapper::model2DTO(Cliente, obj);
}

void ClienteService::getClienteByNome(string nome, ClienteOutDTO & obj) {
    GestoraEventos *model = this->repo->getModel();
    ClienteContainer &container = model->getClientes();
    Cliente * Cliente = container.getClienteByNome(nome);
    ClienteMapper::model2DTO(Cliente, obj);
}

void ClienteService::getClienteByPassword(string password, ClienteOutDTO & obj) {
    GestoraEventos *model = this->repo->getModel();
    ClienteContainer &container = model->getClientes();
    Cliente * Cliente = container.getClienteByPassword(password);
    ClienteMapper::model2DTO(Cliente, obj);
}

void ClienteService::getClienteByNomeAndPassword(string nome, string password, ClienteOutDTO & obj) {
    GestoraEventos *model = this->repo->getModel();
    ClienteContainer &container = model->getClientes();
    Cliente * cliente = container.getClienteByNomeAndPassword(nome, password);
    ClienteMapper::model2DTO(cliente, obj);
}

/*void ClienteService::remove(string ID, ClienteOutDTO & obj) {
    GestoraEventos *model = this->repo->getModel();
    ClienteContainer &container = model->getClientes();
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
}*/

void ClienteService::update(string nome, ClienteInDTO & obj) {
    GestoraEventos *model = this->repo->getModel();
    ClienteContainer &container = model->getClientes();
    Cliente * Cliente = container.getClienteByNome(nome);
    container.update(obj.nome, obj.email, obj.password);
}
