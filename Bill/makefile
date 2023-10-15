CC=g++
FLAGS=-Wall -g
LIBS =
RM=rm
BUILD_L = ./build.log
OUTPUT = ./output.log


all: EXP53 EXP60 CTR50 CTR51 CTR52 CTR53 CTR54 CTR55 CTR56
	echo "Build Successful" >> ${BUILD_L}

EXP53:
	$(CC) $(FLAGS) ./EXP53.cpp -o rule_EXP53 $(LIBS) 2>> $(BUILD_L)

EXP60:
	$(CC) $(FLAGS) ./EXP60.cpp -o rule_EXP60 $(LIBS) 2>> $(BUILD_L)

CTR50:
	$(CC) $(FLAGS) ./CTR50.cpp -o rule_CTR50 $(LIBS) 2>> $(BUILD_L)
	
CTR51:
	$(CC) $(FLAGS) ./CTR51.cpp -o rule_CTR51 $(LIBS) 2>> $(BUILD_L)

CTR52:
	$(CC) $(FLAGS) ./CTR52.cpp -o rule_CTR52 $(LIBS) 2>> $(BUILD_L)

CTR53:
	$(CC) $(FLAGS) ./CTR53.cpp -o rule_CTR53 $(LIBS) 2>> $(BUILD_L)

CTR54:
	$(CC) $(FLAGS) ./CTR54.cpp -o rule_CTR54 $(LIBS) 2>> $(BUILD_L)

CTR55:
	$(CC) $(FLAGS) ./CTR55.cpp -o rule_CTR55 $(LIBS) 2>> $(BUILD_L)

CTR56:
	$(CC) $(FLAGS) ./CTR56.cpp -o rule_CTR56 $(LIBS) 2>> $(BUILD_L)

clean:
	$(RM) rule_EXP53 rule_EXP60 rule_CTR50 rule_CTR51 rule_CTR52 rule_CTR53 rule_CTR54 rule_CTR55 rule_CTR56 $(BUILD_L) $(OUTPUT_L)