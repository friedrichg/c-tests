#include <stdio.h>
#include <limits.h>
int main() {
   char c=0;
   short s=0; /*same as signed short */
   int i=0; /* same as signed int */
   long l=0; /* same as signed long */

   signed   char scb = SCHAR_MIN;
   signed   char sce = SCHAR_MAX;
   unsigned char ucb = 0;
   unsigned char uce = UCHAR_MAX;

   signed   short ssb = SHRT_MIN;
   signed   short sse = SHRT_MAX;
   unsigned short usb = 0;
   unsigned short use = USHRT_MAX;

   signed   int sib = INT_MIN;
   signed   int sie = INT_MAX;
   unsigned int uib = 0;
   unsigned int uie = UINT_MAX;

   signed   long slb = LONG_MIN;
   signed   long sle = LONG_MAX;
   unsigned long ulb = 0;
   unsigned long ule = ULONG_MAX;

   signed   long long sllb = LLONG_MIN;
   signed   long long slle = LLONG_MAX;
   unsigned long long ullb = 0;
   unsigned long long ulle = ULLONG_MAX;

   printf("Limits:\n\n");
   printf("signed   char begin: %hhd --next--> %hhd\n",scb,(signed char)(scb-(signed char)1));
   printf("signed   char   end: %hhd --next--> %hhd\n",sce,(signed char)(sce+(signed char)1)); 
   printf("unsigned char begin: %hhu --next--> %hhu\n",ucb,(unsigned char)(ucb-(unsigned char)1));
   printf("unsigned char   end: %hhu --next--> %hhu\n",uce,(unsigned char)(uce+(unsigned char)1));
   printf("\n"); 
   printf("signed   short begin: %hd --next--> %hd\n",ssb,(signed short)(ssb-(signed short)1));
   printf("signed   short   end: %hd --next--> %hd\n",sse,(signed short)(sse+(signed short)1));
   printf("unsigned short begin: %hu --next--> %hu\n",usb,(signed short)(usb-(signed short)1));
   printf("unsigned short   end: %hu --next--> %hu\n",use,(signed short)(usb+(signed short)1)); 
   printf("\n"); 
   printf("signed   int begin: %d --next--> %d\n",sib,sib-1);
   printf("signed   int   end: %d --next--> %d\n",sie,sib+1);
   printf("unsigned int begin: %u --next--> %u\n",uib,uib-1);
   printf("unsigned int   end: %u --next--> %u\n",uie,uie+1); 
   printf("\n"); 
   printf("signed   long begin: %ld --next--> %ld\n",slb,slb-1L);
   printf("signed   long   end: %ld --next--> %ld\n",sle,sle+1L);
   printf("unsigned long begin: %lu --next--> %lu\n",ulb,ulb-1L);
   printf("unsigned long   end: %lu --next--> %lu\n",ule,ule+1L); 
   printf("\n"); 
   printf("signed   long long begin: %lld --next--> %lld\n",sllb,sllb-1LL);
   printf("signed   long long   end: %lld --next--> %lld\n",slle,slle+1LL);
   printf("unsigned long long begin: %llu --next--> %llu\n",ullb,ullb-1LL);
   printf("unsigned long long   end: %llu --next--> %llu\n",ulle,ulle+1LL); 
   return 0;
}
