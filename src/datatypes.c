#include <stdio.h>
#include <limits.h>
int main() {
   char c=0;
   short s=0; /*same as signed short */
   int i=0; /* same as signed int */
   long l=0; /* same as signed long */
   long long ll=0; /* same as signed long long */

   double d = 0.0;
   long double ld = 0.0;
   
   float f = 0.0;
   
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
   printf("signed   char begin: %hhi --next--> %hhi\n",scb,(signed char)(scb-(signed char)1));
   printf("signed   char   end: %hhi --next--> %hhi\n",sce,(signed char)(sce+(signed char)1)); 
   printf("unsigned char begin: %hhi --next--> %hhi\n",ucb,(unsigned char)(ucb-(unsigned char)1));
   printf("unsigned char   end: %hhi --next--> %hhi\n",uce,(unsigned char)(uce+(unsigned char)1));
   printf("\n"); 
   printf("signed   short begin: %hi --next--> %hi\n",ssb,(signed short)(ssb-(signed short)1));
   printf("signed   short   end: %hi --next--> %hi\n",sse,(signed short)(sse+(signed short)1));
   printf("unsigned short begin: %hi --next--> %hi\n",usb,(unsigned short)(usb-(unsigned short)1));
   printf("unsigned short   end: %hi --next--> %hi\n",use,(unsigned short)(usb+(unsigned short)1)); 
   printf("\n"); 
   printf("signed   int begin: %i --next--> %d\n",sib,sib-1);
   printf("signed   int   end: %i --next--> %d\n",sie,sib+1);
   printf("unsigned int begin: %i --next--> %u\n",uib,uib-1);
   printf("unsigned int   end: %i --next--> %u\n",uie,uie+1); 
   printf("\n"); 
   printf("signed   long begin: %li --next--> %li\n",slb,slb-1L);
   printf("signed   long   end: %li --next--> %li\n",sle,sle+1L);
   printf("unsigned long begin: %lu --next--> %lu\n",ulb,ulb-1L);
   printf("unsigned long   end: %lu --next--> %lu\n",ule,ule+1L); 
   printf("\n"); 
   printf("signed   long long begin: %lli --next--> %lli\n",sllb,sllb-1LL);
   printf("signed   long long   end: %lli --next--> %lli\n",slle,slle+1LL);
   printf("unsigned long long begin: %llu --next--> %llu\n",ullb,ullb-1LL);
   printf("unsigned long long   end: %llu --next--> %llu\n",ulle,ulle+1LL); 

   printf("\nSizes:\n\n");
   printf("Size of char: %lu\n",sizeof(c));
   printf("Size of short: %lu\n",sizeof(s));
   printf("Size of int: %lu\n",sizeof(i));
   printf("Size of long: %lu\n",sizeof(l));
   printf("Size of long long: %lu\n",sizeof(ll));
   printf("Size of double: %lu\n",sizeof(d));
   printf("Size of long double: %lu\n",sizeof(ld));
   printf("Size of float: %lu\n",sizeof(f));

   return 0;
}
