/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _1_main__opaque_Node_1;
struct _IO_FILE;
struct timeval;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
typedef unsigned long size_t;
typedef struct _IO_FILE FILE;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int fclose(void *stream ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
extern void exit(int status ) ;
struct _1_main__opaque_Node_1 {
   int data ;
   struct _1_main__opaque_Node_1 *next ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list1_1  =    (struct _1_main__opaque_Node_1 *)0;
extern int raise(int sig ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
unsigned int DJBHash(char *str , unsigned int len ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int main(int argc , char **argv ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
void megaInit(void) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list2_1  =    (struct _1_main__opaque_Node_1 *)0;
extern void *malloc(unsigned long size ) ;
typedef struct _1_main__opaque_Node_1 *_1_main__opaque_List_1;
extern int scanf(char const   *format  , ...) ;
int main(int argc , char **argv ) 
{ 
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;
  int i7 ;
  int r8 ;
  struct _1_main__opaque_Node_1 *p9 ;

  {
  megaInit();
  i7 = 0;
  while (i7 < 2) {
    r8 = rand();
    {
    p9 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
    if (p9 != (struct _1_main__opaque_Node_1 *)0UL) {
      p9->data = r8;
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        p9->next = _1_main__opaque_list1_1->next;
        _1_main__opaque_list1_1->next = p9;
      } else {
        p9->next = p9;
        _1_main__opaque_list1_1 = p9;
      }
    } else {

    }
    }
    i7 ++;
  }
  _1_main__opaque_list2_1 = _1_main__opaque_list1_1;
  str = (unsigned char *)*(argv + 1);
  tmp = strlen((char const   *)str);
  tmp___0 = DJBHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 1235568949U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
unsigned int DJBHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int i ;
  int randomVars_BogusReturn5 ;

  {
  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      len = DJBHash(0, i);
    } else {

    }
  } else {
    __asm__  volatile   (".byte 0x34,0x0,0x0,0x55":);
  }
  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
    hash = 5381U;
    i = 0U;
    i = 0U;
  } else {

  }
  while (1) {
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          while (1) {
            while (((i < len) == 1) == 1) {

            }
          }
        } else
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            while ((i < len) == 1) {

            }
          } else {
            __asm__  volatile   (".byte 0x68,0x10,0xa0,0xc4,0x7e":);
          }
        } else {

        }
      } else
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

      } else {
        while ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) > randomVars_BogusReturn5) {
          while (1) {
            while (1) {
              while (1) {
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

                } else
                if ((((i < len) == 1) == 1) == randomVars_BogusReturn5) {

                } else {
                  break;
                }

              }

            }
          }
        }
      }
    } else
    if (! (i < len)) {
      break;
    }
    hash = ((hash << 5) + hash) + (unsigned int )*str;
    str ++;
    i ++;
  }
  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    while ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) != randomVars_BogusReturn5) {
      while (1) {
        if (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != randomVars_BogusReturn5) >= randomVars_BogusReturn5) {
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            return (hash);
          } else
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            __asm__  volatile   (".byte 0xa0,0x14,0x69,0xb1,0xda,0x78,0x27":);
          } else {
            __asm__  volatile   (".byte 0xa0,0x14,0x69,0xb1,0xda,0x78,0x27":);
          }
        } else {

        }
        randomVars_BogusReturn5 = main(randomVars_BogusReturn5 + 3, (& str + -1) + 1);
      }
    }
  } else
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    while ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != randomVars_BogusReturn5) {
      randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str + -1);
    }
  } else
  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
    randomVars_BogusReturn5 = main(3, & str);
  } else {

  }
  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

  } else {
    return (hash);
  }
}
}
void megaInit(void) 
{ 


  {

}
}