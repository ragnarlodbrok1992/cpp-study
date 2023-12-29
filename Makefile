MAIN=src/main.cpp
RULE_OF_THREE_SOURCE=src/problems/ruleofthree.cpp

all: ${MAIN}
	g++ -std=c++17 -o cpp-study ${MAIN} -Wall -Wextra -pedantic

run: all
	./cpp-study

rule_of_three: ${RULE_OF_THREE_SOURCE}
	g++ -std=c++17 -o rule-of-three ${RULE_OF_THREE_SOURCE} -Wall -Wextra -pedantic

