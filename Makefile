level1:
	clang src/level1.c -o release/level1
level2:
	clang src/level2.c -o release/level2
level3:
	clang src/level3.c -o release/level3
all: level1

cleanup:
	rm -fr release
	mkdir release