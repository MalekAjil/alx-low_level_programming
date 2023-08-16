#ifndef prntname
#define prntname
void print_name(char *name, void (*f)(char *));
#endif
#ifndef itrator
#define itrator
void array_iterator(int *array, size_t size, void (*action)(int));
#endif

