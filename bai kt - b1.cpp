#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//-1: neu muon a dung truoc b thi return -1
// 1: neu muon a dung sau b thi return 1

int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    if(*x < *y)
          return -1;
    return 1;
}
 void chuadHoa (char c[]){
    c[0] = toupper(c[0]);
    for(int i=1;i<strlen(c);i++)
       c[i] = tolower(c[i]);

}


int main(){
    int t;
    scanf("%d",&t);
    getchar ();
    while(t--){
        char c[1000],a[20][40];
        int n = 0 ;
        gets(c);
        char *token = strtok(c," ");
        while(token != NULL){
        	strcpy(a[n],token) ; ++n;
        	token = strtok( NULL, " ");
        }
        strupr(a[n-1]);//  chu y neu ham strupr bi bo, ban tu xay dung
        printf("%s, ",a[n-1]);
        for(int i=0;i<n-1;i++){
        	chuanhoa (a[i]);
            printf("%s, ",a[n-1]);
            if(ilen-2) printf("");
        }
        printf("\n");
    }
}

