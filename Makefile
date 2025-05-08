build:
	g++ src/*.cpp src/Game/*.cpp src/Sprite/*.cpp -o bin/game -lraylib -lm

run:
	./bin/game

clean:
	rm bin/game