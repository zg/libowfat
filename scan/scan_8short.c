#include "scan.h"

size_t scan_8short(const char* src,unsigned short* dest) {
  register const char *tmp=src;
  register unsigned short l=0;
  register unsigned char c;
  while ((c=(unsigned char)(*tmp-'0'))<8) {
    if (l>>(sizeof(l)*8-3)) break;
    l=(unsigned short)(l*8+c);
    ++tmp;
  }
  *dest=l;
  return (size_t)(tmp-src);
}
