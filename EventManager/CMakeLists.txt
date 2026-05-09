cmake_minimum_required(VERSION 3.30)
project(EventManager)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_HEADERS_DIR
        ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR
        ${PROJECT_SOURCE_DIR}/sources)

set(PROJECT_HEADERS_MODEL_DIR
        ${PROJECT_HEADERS_DIR}/model)
set(PROJECT_SOURCES_MODEL_DIR
        ${PROJECT_SOURCES_DIR}/model)
include_directories(
        ${PROJECT_HEADERS_MODEL_DIR}
        ${PROJECT_SOURCES_MODEL_DIR})
set(MODEL_SOURCE_FILES
        ${PROJECT_HEADERS_MODEL_DIR}/Utilizador.h
        ${PROJECT_HEADERS_MODEL_DIR}/Cliente.h
        ${PROJECT_SOURCES_MODEL_DIR}/Cliente.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Organizador.h
        ${PROJECT_SOURCES_MODEL_DIR}/Organizador.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Date.h
        ${PROJECT_SOURCES_MODEL_DIR}/Date.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Artista.h
        ${PROJECT_HEADERS_MODEL_DIR}/Evento.h
)

add_executable(EventManager main.cpp
        headers/model/Utilizador.h
        headers/model/Cliente.h
        sources/model/Cliente.cpp
        headers/model/Organizador.h
        sources/model/Organizador.cpp
        headers/model/Date.h
        sources/model/Date.cpp
        headers/model/Evento.h
        sources/model/Evento.cpp
        headers/model/RecursoMaterial.h
        sources/model/RecursoMaterial.cpp
        headers/model/Artista.h
        sources/model/Artista.cpp
        headers/model/AluguerMaterial.h
        sources/model/AluguerMaterial.cpp
        headers/model/AluguerMaterialContainer.h
        headers/model/ArtistaContainer.h
        headers/model/ClienteContainer.h
        headers/model/EventoContainer.h
        headers/model/OrganizadorContainer.h
        headers/model/RecursoMaterialContainer.h
)
