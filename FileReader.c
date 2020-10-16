#include <stdio.h>


void FileReader(char *path)
{
   FILE *fp; char buff[255]; 
fp = fopen(path, "r+");
while(1){
   
char *Line=fgets(buff, 255, (FILE*)fp);

if (Line==NULL || Line ==0) { printf("--- [ END OF LINE ] ---");          break; } 
// But if not
   printf("%s\n", buff ); 
}

   fclose(fp);
}

main(int argc,char **argv) {


if (argc>1) { 

FileReader( argv[1]); 
} 

return 0;
}