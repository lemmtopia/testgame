build:
	g++ -std=c++17 src/*.cpp src/Game/*.cpp src/Sprite/*.cpp src/Player/*.cpp src/TileMap/*.cpp -o bin/game -lraylib -lm

run:
	./bin/game

clean:
	rm bin/game