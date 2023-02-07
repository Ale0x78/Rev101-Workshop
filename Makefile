level1:
	gcc -g src/level1.c -o release/level1
level2:
	gcc -g src/level2.c -o release/level2
level3:
	gcc -g src/level3.c -o release/level3
level4:
	gcc src/level3.c -o release/level4

all: level1 level2 level3 level4

cleanup:
	rm -fr release
	mkdir release