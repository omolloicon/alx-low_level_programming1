#ifndef main_h
#define main_h

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void ch_free_grid(char **grid, unsigned int height);

#endif
