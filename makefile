all:
	clear
	gcc -I/opt/homebrew/include/ window.c game.c -o game `pkg-config raylib --cflags --libs`
	./game