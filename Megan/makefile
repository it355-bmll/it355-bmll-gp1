CC=g++
CC_REC= gcc
FLAGS=-Wall -g -std=c++17
LIBS =
RM=rm
BUILD_L = ./build.log
OUTPUT = ./output.log
RULE_1 = ERR54
RULE_2 = ERR56
RULE_3 = ERR58
RULE_4 = ERR59
RULE_5 = FIO50
RULE_6 = STR50
RULE_7 = STR51
RULE_8 = STR52
RULE_9 = STR53
REC_1 = ERR00
REC_2 = ERR01
REC_3 = ERR04
REC_4 = ERR06


all: $(RULE_1) $(RULE_2) $(RULE_3) $(RULE_4) $(RULE_5) $(RULE_6) $(RULE_7) $(RULE_8) $(RULE_9) $(REC_1) $(REC_2) $(REC_3) $(REC_4)
	echo "Build Successful" >> ${BUILD_L}

$(RULE_1):
	$(CC) $(FLAGS) ./$(RULE_1).cpp -o rule_$(RULE_1) $(LIBS) 2>> $(BUILD_L)

$(RULE_2):
	$(CC) $(FLAGS) ./$(RULE_2).cpp -o rule_$(RULE_2) $(LIBS) 2>> $(BUILD_L)

$(RULE_3):
	$(CC) $(FLAGS) ./$(RULE_3).cpp -o rule_$(RULE_3) $(LIBS) 2>> $(BUILD_L)
	
$(RULE_4):
	$(CC) $(FLAGS) ./$(RULE_4).cpp -o rule_$(RULE_4) $(LIBS) 2>> $(BUILD_L)

$(RULE_5):
	$(CC) $(FLAGS) ./$(RULE_5).cpp -o rule_$(RULE_5) $(LIBS) 2>> $(BUILD_L)

$(RULE_6):
	$(CC) $(FLAGS) ./$(RULE_6).cpp -o rule_$(RULE_6) $(LIBS) 2>> $(BUILD_L)

$(RULE_7):
	$(CC) $(FLAGS) ./$(RULE_7).cpp -o rule_$(RULE_7) $(LIBS) 2>> $(BUILD_L)

$(RULE_8):
	$(CC) $(FLAGS) ./$(RULE_8).cpp -o rule_$(RULE_8) $(LIBS) 2>> $(BUILD_L)

$(RULE_9):
	$(CC) $(FLAGS) ./$(RULE_9).cpp -o rule_$(RULE_9) $(LIBS) 2>> $(BUILD_L)

$(REC_1):
	$(CC) $(FLAGS) ./$(REC_1).cpp -o rec_$(REC_1) $(LIBS) 2>> $(BUILD_L)

$(REC_2):
	$(CC) $(FLAGS) ./$(REC_2).cpp -o rec_$(REC_2) $(LIBS) 2>> $(BUILD_L)

$(REC_3):
	$(CC) $(FLAGS) ./$(REC_3).cpp -o rec_$(REC_3) $(LIBS) 2>> $(BUILD_L)

$(REC_4):
	$(CC) $(FLAGS) ./$(REC_4).cpp -o rec_$(REC_4) $(LIBS) 2>> $(BUILD_L)


clean:
	$(RM) rule_$(RULE_1) rule_$(RULE_2) rule_$(RULE_3) rule_$(RULE_4) rule_$(RULE_5) rule_$(RULE_6) rule_$(RULE_7) rule_$(RULE_8) rule_$(RULE_9) rec_$(REC_1) rec_$(REC_2) rec_$(REC_3) rec_$(REC_4) $(BUILD_L) $(OUTPUT_L)
