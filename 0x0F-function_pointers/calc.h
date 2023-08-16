/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#ifndef opadd
#define opadd
int op_add(int a, int b);
#endif

#ifndef op
#define opsub
int op_sub(int a, int b);
#endif

#ifndef opmul
#define opmul
int op_mul(int a, int b);
#endif

#ifndef opdiv
#define opdiv
int op_div(int a, int b);
#endif

#ifndef opmod
#define opmod
int op_mod(int a, int b);
#endif

#ifndef getfunc
#define getfunc
int (*get_op_func(char *s))(int, int);
#endif

