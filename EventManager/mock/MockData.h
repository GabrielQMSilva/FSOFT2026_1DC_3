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

  const vector<int> numeroMembros = {
      4,  // Arctic Monkeys
      4,  // Dire Straits
      5,  // The Strokes
      4,  // Van Halen
      4,  // Eagles
      1,  // Eric Clapton
      5,  // Traveling Wilburys
      5,  // Fleetwood Mac
      2,  // Lesbian Couple
      5,  // Guns n' Roses
      1,  // Yamandu Costa
      1,  // Django Reinhardt
      1,  // John Mayer
      5,  // The Greatful Dead
      4,  // Black Sabbath
      5,  // Radiohead
      5,  // Pearl Jam
      4,  // SoundGarden
      4,  // Audioslave
      4,  // Red Hot Chili Peppers
      1,  // Paco de Lucia
      4,  // Pink Floyd
      3,  // The Aristocrats
      1,  // LON3R JOHNY
      4,  // Wet Bed Gang
      1,  // Julinho Ksd
      4,  // Rolling Stones
      4,  // Creedence Clearwater Revival
      1,  // David Bowie
      1,  // Laufey
      2,  // Mazzy Star
      9,  // Slipknot
      6,  // Linkin Park
      4,  // Pixies
      4,  // Kings of Leon
      5,  // The Band
      1,  // Gary Moore
      4,  // U2
      3,  // Nunca Mates o Mandarim
      2,  // The Handsome Family
      1,  // Jeff Buckley
      4,  // The Backseat Lovers
      1,  // Jimi Hendrix
      7,  // Black Country, New Road
      4,  // Creed
      1,  // Iggy Pop
      5,  // Ornatos Violeta
      1,  // Yeat
      1,  // twikipedia
      1,  // Olivia Rodrigo
      1,  // Harry Styles
      4,  // The Dead South
      1,  // Susumu Hirasawa
      1,  // Billy Idol
      4,  // The Clash
      5,  // Duran Duran
      4,  // The Cure
      4,  // ABBA
      4,  // Queen
      3,  // The Police
      4,  // The Smiths
      3,  // a-ha
  };

  const vector<float> budget = {
      150000.0f,  // Arctic Monkeys
      180000.0f,  // Dire Straits
      80000.0f,   // The Strokes
      220000.0f,  // Van Halen
      350000.0f,  // Eagles
      300000.0f,  // Eric Clapton
      200000.0f,  // Traveling Wilburys
      250000.0f,  // Fleetwood Mac
      8000.0f,    // Lesbian Couple
      400000.0f,  // Guns n' Roses
      15000.0f,   // Yamandu Costa
      20000.0f,   // Django Reinhardt
      100000.0f,  // John Mayer
      180000.0f,  // The Greatful Dead
      200000.0f,  // Black Sabbath
      175000.0f,  // Radiohead
      160000.0f,  // Pearl Jam
      130000.0f,  // SoundGarden
      90000.0f,   // Audioslave
      300000.0f,  // Red Hot Chili Peppers
      25000.0f,   // Paco de Lucia
      500000.0f,  // Pink Floyd
      30000.0f,   // The Aristocrats
      12000.0f,   // LON3R JOHNY
      10000.0f,   // Wet Bed Gang
      6000.0f,    // Julinho Ksd
      800000.0f,  // Rolling Stones
      150000.0f,  // Creedence Clearwater Revival
      350000.0f,  // David Bowie
      45000.0f,   // Laufey
      35000.0f,   // Mazzy Star
      120000.0f,  // Slipknot
      200000.0f,  // Linkin Park
      70000.0f,   // Pixies
      90000.0f,   // Kings of Leon
      100000.0f,  // The Band
      40000.0f,   // Gary Moore
      450000.0f,  // U2
      8000.0f,    // Nunca Mates o Mandarim
      15000.0f,   // The Handsome Family
      60000.0f,   // Jeff Buckley
      25000.0f,   // The Backseat Lovers
      400000.0f,  // Jimi Hendrix
      20000.0f,   // Black Country, New Road
      80000.0f,   // Creed
      70000.0f,   // Iggy Pop
      20000.0f,   // Ornatos Violeta
      30000.0f,   // Yeat
      5000.0f,    // twikipedia
      150000.0f,  // Olivia Rodrigo
      200000.0f,  // Harry Styles
      18000.0f,   // The Dead South
      12000.0f,   // Susumu Hirasawa
      55000.0f,   // Billy Idol
      100000.0f,  // The Clash
      85000.0f,   // Duran Duran
      90000.0f,   // The Cure
      600000.0f,  // ABBA
      700000.0f,  // Queen
      300000.0f,  // The Police
      80000.0f,   // The Smiths
      70000.0f,   // a-ha
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

  const vector<string> nomeOrganizadores = {
      "Murias",
      "Gabri",
      "Joao Jose",
  };

  const vector<string> emailOrganizadores = {
      "1240712@isep.ipp.pt",
      "1241190@isep.ipp.pt",
      "1240715@isep.ipp.pt",
  };

  const vector<string> passwordOrganizadores ={
      "BANGALO2026",
      "CABANA2026",
      "EDIFICIO2026",
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

  const vector<int> lotacaoEventos = {
      320,
      150,
      200,
      480,
      90,
      60,
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
  void insertOrganizadores(OrganizadorContainer& container);
  void insertEventos(EventoContainer& container);

public:
  void generateData(GestoraEventos& gestoraEventos);
};

#endif //MOCKDATA_H
