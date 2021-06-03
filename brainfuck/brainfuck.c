#include <stdio.h>
#include <stdlib.h>
#define N 30000

FILE*F;c;a[N],p;*s[N],t;f[N],*i=f;b(){for(c=1;*(
i+1)&&c;c-=*++i^91?!(*i^93):~0);}main(x,v)char**
v;{(x-=2)||!(F=fopen(*++v,"r"))?exit(1):0;for(;c
=-~getc(F);)(c--^44)/4&&c^60&&c^93&&c^62&&c^91||
(f[x++]=c);for(;i<f+x;++i)*i&16?*i&1?*i&2?a[p]?s
[t++]=i:b():t?a[p]?i=s[~-t]:--t:exit(1):*i&2?++p
^N?0:exit(1):p--?0:exit(1):*i&1?a[p]+=*i&2?1:~0:
*i&2?putchar(a[p]):(a[p]=getchar());exit(!!t);}
