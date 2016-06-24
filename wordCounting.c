#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
 
  int state, c, nw, sp;

  state = OUT;
  nw = sp = 0;

  while((c = getchar()) != EOF){
    if(c == '\n' || c == '\t' || c == ' '){
      sp+=1;
      state = OUT; 
    };
    if(state == OUT){
      nw+=1;
      state = IN;
    };
  };
  printf("%d words and %d spaces\n", nw, sp);

};
