all: hi

h.tab.c h.tab.h: h.y
	bison -d h.y

lex.yy.c: h.l h.tab.h
	flex h.l

hi: lex.yy.c h.tab.c h.tab.h node.h
	gcc -o hi h.tab.c lex.yy.c