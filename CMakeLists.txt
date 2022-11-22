cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(IMC)

set(IMC_SRC
    header/player.h
    header/pcplayer.h
    header/humanplayer.h
    header/game.h
    header/engine.h
    source/main.cxx
    source/player.cxx
    source/pcplayer.cxx
    source/humanplayer.cxx
    source/game.cxx
    source/engine.cxx
    )

add_executable(IMC ${IMC_SRC})  
target_include_directories(IMC PRIVATE header)
