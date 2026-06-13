//
// Created by gabri on 12/06/2026.
//

#ifndef MOCKDATA_H
#define MOCKDATA_H

#include "GestoraEventos.h"
#include <string>
#include <time.h>
#include <vector>

using namespace std;

class MockData {
private:
  const vector<string> nomeArtistas = {
      "Arctic Monkeys",
      "Dire Straits",
      "The Strokes",
      "Van Halen",
      "Eagles",
      "Eric Clapton",
      "Traveling Wilburys",
      "Fleetwood Mac",
      "Lesbian Couple",
      "Guns n' Roses",
      "Yamandu Costa",
      "Django Reinhardt",
      "John Mayer",
      "The Greatful Dead",
      "Black Sabbath",
      "Radiohead",
      "Pearl Jam",
      "SoundGarden",
      "Audioslave",
      "Red Hot Chili Peppers",
      "Paco de Lucia",
      "Pink Floyd",
      "The Aristocrats",
      "LON3R JOHNY",
      "Wet Bed Gang",
      "Julinho Ksd",
      "Rolling Stones",
      "Creedence Clearwater Revival",
      "David Bowie",
      "Laufey",
      "Mazzy Star",
      "Slipknot",
      "Linkin Park",
      "Pixies",
      "Kings of Leon",
      "The Band",
      "Gary Moore",
      "U2",
      "Nunca Mates o Mandarim",
      "The Handsome Family",
      "Jeff Buckley",
      "The Backseat Lovers",
      "Jimi Hendrix",
      "Black Country, New Road",
      "Creed",
      "Iggy Pop",
      "Ornatos Violeta",
      "Yeat",
      "twikipedia",
      "Olivia Rodrigo",
      "Harry Styles",
      "The Dead South",
      "Susumu Hirasawa",
      "Billy Idol",
      "The Clash",
      "Duran Duran",
      "The Cure",
      "ABBA",
      "Queen",
      "The Police",
      "The Smiths",
      "a-ha",
  };

  const vector<string> nomeClientes = {
      "Jorge Batalha",
      "Cidade Chateada",
      "Paula Tejana",
      "Irinéu Hélio",
      "Gerencio Aprendizagens",
      "Jacinto Pinto",
      "Odete Atividades",
      "Maria Banheiras",
      "Mantorras Massa",
      "Filho do Comandante",
      "Tatiana do Cerco",
      "Josoé Piranha",
      "Chefe Kito",
      "Nonó Foid",
      "José Agricultor",
      "Bart Simpson Triste",
      "Artur Yavorskyy",
      "Caio Duro",
      "António Rabudo",
      "Jamal Pretoriano",
      "Diddy Blud",
      "Bobber Kurwa",
      "Kin Moreno",
      "Mister Magoo",
      "Walter White",
      "Pudim Abade Priscos",
      "Fizz Hehe",
      "Tung Tung Tung Sahur",
      "Larp Larp Larp Sahur",
      "André Hu",
      "André Ironic",
      "Henrique Mau",
      "Chapelas Froiz",
      };

  const vector<string> nomeEventos = {
      "Rock In ISEP",
      "Top Pop",
      "Alchemy Live",
      "Live Aid",
      "Trap Irony",
      "Jazzy Feel Good",
  };

  const vector<string> tipoEventos = {
      "Rock",
      "Pop",
      "Rock",
      "Mixed",
      "Trap",
      "Jazz",
  };

  const vector<int> lotacaoMaxEventos = {
      500,
      300,
      400,
      500,
      200,
      150,
  };

  const vector<int> precoEventos = {
      30,
      40,
      15,
      55,
      45,
      20,
  };

  void insertClientes(ClienteContainer& container);
  void insertArtistas(ArtistaContainer& container);
  void insertEventos(EventoContainer& container);
  Evento * getRandomEvento(EventoContainer& container);
  void insertAluguerMaterial(AluguerMaterialContainer& alugueres, ArtistaContainer& artistas, EventoContainer& eventos);

public:
  void generateData(GestoraEventos& gestoraEventos);
};

#endif //MOCKDATA_H
