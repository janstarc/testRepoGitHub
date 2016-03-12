int main (){
    printf("\n");
    printf("Develop 1 --- polepsan izpis\n");
    printf("Prva verzija - 0.1\n");
    printf("Develop2 -- dodatek v drugi verziji commita");
    printf("Develop 1 --- polepsan izpis\n");
    
    printf("\n");
    printf("Feature branch - prvi feature - branje dveh stevil: ");
    int prva;
    int druga;
    scanf("%d", &prva);
    scanf("%d", &druga);
    printf("Vneseni stevili: %d in %d\n", prva, druga);
    int tretja=prva+druga;
    printf("Vsota: %d", tretja);
    return 0;
}