void emit (int t, char* tval)  /*  generates output  */
{
  switch(t) {
    case COMMENT:
      printf("%s\n", tval); break; 
    case STRING:
      printf("%s", tval); break; 
    case INT:
      printf("int "); break; 
    case REAL:
      printf("real "); break;
    case DOUBLE:
      printf("double "); break;
    case CONST:
      printf("const "); break;
    case REF:
      printf("ref "); break;
    case IF:
      printf("if "); break;
    case ELSE:
      printf("else "); break; 
    case FOR:
      printf("for "); break;
    case SWITCH:
      printf("switch "); break;
    case BREAK:
      printf("break"); break;
    case FALSE:
      printf("FALSE"); break;
    case TRUE:
      printf("TRUE"); break;
    case PROCEDURE:
      printf("\nPROCEDURE\n"); break;
    case FUNCTION:
      printf("\nfunction "); break;
    case RETURN:
      printf("return "); break;
    case VARIABLES_SECTION:
      printf("\n\nvariables"); break;
    case SUBPROGRAMS_SECTION:
      printf("\n\nsubprograms"); break;
    case SEMICOLON:
      printf(";\n"); break;      
    case COMMA:
      printf(", "); break;
    case COLON:
      printf(":\n"); break;        
    case OPEN_PARENTHESIS:
      printf("( "); break;
    case CLOSE_PARENTHESIS:
      printf(" )"); break;
    case OPEN_BRACKETS:
      printf("[ "); break;
    case CLOSE_BRACKETS:
      printf(" ]"); break;
    case  ID:
      printf("%s ", tval); break; 


    case INT_NUMBER:
      printf("%s", tval); break;
    case COMPLEX_NUMBER:
      printf("%s", tval); break;
    case REAL_NUMBER:
      printf("%s", tval); break;


    case LEQ_OP:
      printf("<= "); break;
    case  BEQ_OP:
      printf(">= "); break;
    case  EQ_OP:
      printf("== "); break;
    case  NEQ_OP:
      printf("!= "); break;

    case ASSIGN_OP:
      printf("= "); break;  



    case SUB_OP:
      printf("- "); break;
    case ADD_OP:
      printf("+ "); break;
    case MULT_OP:
      printf("* "); break;
    case DIV_OP:
     printf("/ "); break;
    case MOD_OP:
      printf("%% "); break;
    case LT_OP:
      printf("< "); break;
    case BT_OP:
      printf("> "); break;
    case EXPO_OP:
      printf("ˆ "); break;

    default:     
      printf("\ntoken %d, tokenval %s\n", t, tval);
  }
}
