https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "minifyjpeg_clnt.c"
#include "minifyjpeg_xdr.c"
#include <stdio.h>
#include <stdlib.h>

CLIENT* get_minify_client(char *server){
    CLIENT *cl;

    /* Your code goes here */

    return cl;
}

/*
The size of the minified file is not known before the call to the library that minimizes it,
therefore this function should allocate the right amount of memory to hold the minimized file
and return it in the last parameter to it
*/
int minify_via_rpc(CLIENT *cl, void* src_val, size_t src_len, size_t *dst_len, void **dst_val){

	/*Your code goes here */
    
 
}
