int lookahead;

void parse(char *src) {  /*  parses and translates expression list  */

    FILE *file = fopen(src, "r");
    if (!file) {
        fprintf(stderr,"could not open %s\n",src);
        exit(1);
    }

    printf("\n---------------------\n");

    yyin = file;
    lookahead = yylex();
    start();
}

void start () {
  /* Just one production for start, so we don't need to check lookahead */
  program(); eat(EOF);
}


void eat(int t) {

  emit(t, yytext);
  if (lookahead == t)
    lookahead = yylex();
  else {
    printf("\n---------------------\n");
    printf("RECEBIDO: %d  ESPERADO: %d\n", lookahead, t);
    error ("syntax error in match");
  }
}