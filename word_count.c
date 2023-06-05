#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

int words = 0; 
FILE *file;
char ch;
bool inAWord = false;
   


file = fopen(argv[1], "r");

    
//reads every character and counts everything it deems as a word
while ((ch = fgetc(file)) !=EOF){

    //this is not in a word
    if (ch==' ' || ch == '\n' || ch == '\t') {
    inAWord = false;
        
    //this is in a word
    }else if(inAWord == false){
    inAWord = true;
    words++;
         
    }

}
    

fclose(file);
    

printf("%s %d\n",argv[1], words);
 
    
    
    
return 0;
    
}
