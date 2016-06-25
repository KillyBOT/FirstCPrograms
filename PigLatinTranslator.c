#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trans(char *in, int ifFirstWord);
int findFirstVowel(char *in);

int main(int argc, char *argv[])
{
  int i;

  trans(argv[1], 1);

  for(i = 2; i < argc; i++){
    //printf("%s\n", argv[i]);
    trans(argv[i], 0);
  };
  printf("\n");
  return 0;
};

int findFirstVowel(char *in){
  int place;
  char c;

  place = 0;

  do{
    c = tolower(in[place]);
    //printf("checking '%c'\n", c);
    //printf("%d\n", place);
    place+=1;
    
  }while(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y' && c != '\0');

  return place-1;
};

void trans(char *in, int ifFirstWord){
  int i = 0;

  if(findFirstVowel(in) != 0){
    if(ifFirstWord == 1){
      printf("%c%s", toupper(in[findFirstVowel(in)]), &in[findFirstVowel(in)+1]);
    } else if(ifFirstWord == 0){
      printf("%s", &in[findFirstVowel(in)]);
    };
    for(i = 0; i < (findFirstVowel(in)); i++){
      printf("%c", in[i]);
    };
    printf("ay ");
  } else if (findFirstVowel(in) == 0){
    if (ifFirstWord == 1){
      printf("%c%syay ", toupper(in[0]), &in[1]);
    } else if (ifFirstWord == 0){
      printf("%syay ", in);
    };
  };
};
