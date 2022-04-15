#include <stdio.h>
int main()
{///檔案指標   開啟檔案   檔名     模式w+ 寫+
    FILE * f = fopen( "檔案輸出.txt", "w+");
    fprintf(f, "Hello 我在這裡喔\n");

     printf("Hello World\n");
}
