int primo(int num){
    int cont=0, i;


    for(i=1; i<=num; i++){
        if(num%i==0){
            cont++;
        }
    }
    if(cont==2){
        return 0;
    }
    else{
        return 1;
    }
}

void calcPrimo(void){
    int i;

    for(i=1;i<=100; i++){
        printf("\nPrimos intervalo 1 a 100\n");
        if(primo(i)==0&i!=1){
            printf("%d \t", i);
        }
    }
}

void mediaPrimo(void){
    int i, cont=0, sum=0;
    float media;

    for(i=100; i<=200; i++){
        if(primo(i)==0){
            cont++;
            sum+=i;
        }

    }

    media=(float)sum/cont;

    printf("\nMedia primos 100 a 200: %.2f", media);


}
