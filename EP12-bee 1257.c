#include <stdio.h>
 
int main(){
    char linha[51];
    int i, j, n, l, k;
    int valor;
    
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%d%*c",&l);
        valor = 0;
        for (j = 0;j < l; j++){
            scanf("%*[^\n]*%c",&linha);
            for (k = 0; linha[k] =! '\0'; k++){
                valor += linha[k] - 65 + j + k;
            }
        }
        printf("%d\n",valor);
    }
    return 0;
}