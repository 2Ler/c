#include<stdio.h>
#include<string.h>
void main(){
  char string[50], word[50], c;
  int str_len, word_len, j = 0, i, count, word_count;
  gets(string);
  gets(word);
  str_len = strlen(string);
  word_len = strlen(word);
  for (i = 0; i < str_len; ) {
    j = 0;
    count = 0;
    while ((string[i] == word[j]) && (j < word_len) && (i < str_len)) {
      count++;
      i++;
      j++;
    }
    if (count == word_len){
      word_count++;
      if (i < str_len)
        i = i - count + 1;
    }
    if (j == 0 && (i < str_len))
      i++;
  }
  printf("%d\n",word_count);
}
