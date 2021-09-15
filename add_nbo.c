#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>



int main(int argc, char* argv[])
{
   uint32_t num1;
   uint32_t num2;

   FILE* fp1 = fopen(argv[1],"rb");
   FILE* fp2 = fopen(argv[2],"rb");

   if(fp1==NULL || fp2==NULL)
   {
      printf("file open error");
      return -1;
   }
   fread(&num1, 1, 4, fp1);
   fread(&num2, 1, 4, fp2);
   num1 = ntohl(num1);
   num2 = ntohl(num2);
   printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", num1, num1, num2, num2, num1 + num2, num1 + num2);
      


   fclose(fp1);
   fclose(fp2);


}
