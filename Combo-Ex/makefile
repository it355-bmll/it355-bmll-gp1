CC=g++
FLAGS=-Wall -g  -std=c++17
LIBS=
RM=rm
BUILD_L = ./build.log
OUTPUT = ./output.log
OUT_N = COMBO_EX

all:
		$(CC) $(FLAGS) ./src/main.cpp ./src/account/*.cpp ./src/account/*.h -o $(OUT_N) $(LIBS) 2>> $(BUILD_L)

clean:
	$(RM) $(OUT_N) $(BUILD_L)