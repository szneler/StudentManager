.PHONY: all
all: debug release

debug: *.cpp includes/*.h
	g++ *.cpp -std=c++17 -Wall -Wextra -Wpedantic -Werror -g -o debug -Iincludes

release: *.cpp includes/*.h
	g++ *.cpp -std=c++17 -Wall -Wextra -Wpedantic -O3 -o release -Iincludes
