deliverable2: lexer.l parser.y
			bison -d parser.y
			flex lexer.l
			cc -o $@ parser.tab.c lex.yy.c -lfl