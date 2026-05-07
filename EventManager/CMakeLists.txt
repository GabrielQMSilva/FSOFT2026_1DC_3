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
        ${PROJECT_HEADERS_MODEL_DIR}/Cliente.h
        ${PROJECT_SOURCES_MODEL_DIR}/Cliente.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Utilizador.h
        ${PROJECT_HEADERS_MODEL_DIR}/Organizador.h
        ${PROJECT_SOURCES_MODEL_DIR}/Organizador.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Date.h
        ${PROJECT_SOURCES_MODEL_DIR}/Date.cpp
)

add_executable(EventManager main.cpp
        sources/model/Cliente.cpp
        headers/model/Utilizador.h
        headers/model/Cliente.h
        headers/model/Organizador.h
        headers/model/Date.h
        sources/model/Date.cpp
        headers/model/Evento.h
)
