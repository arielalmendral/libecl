#include <stdlib.h>
#include <stdio.h>
#include <util.h>
#include <string.h>      
#include <path_fmt.h>
#include <stdarg.h>
#include <hash.h>
#include <unistd.h>
#include <thread_pool.h>
#include <stringlist.h>
#include <menu.h>
#include <subst.h>
#include <arg_pack.h>




int main(int argc , char ** argv) {
  FILE * stream1 = util_fopen("link" , "r");
  FILE * stream2 = util_fopen("fileXX" , "w");
  
  printf("Succesfully opened /tmp for reading ... \n");
}
