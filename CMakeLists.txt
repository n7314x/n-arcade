cmake_minimum_required(VERSION 3.25.1)

project(TerminalArcade)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(TerminalArcade
	src/main.cpp
	src/arcade.cpp
	src/terminal.cpp
	src/games/guessing_game.cpp
	src/games/higher_lower.cpp
	src/games/rock_paper_scissors.cpp
)
