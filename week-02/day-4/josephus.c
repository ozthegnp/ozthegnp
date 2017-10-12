void main()
{
    int j = 41;

    printf("\n === Josephus Problem Solver ===\n");
    printf("How big is the circle?\n");
    scanf("%d", &j);
    printf("\n");

    int i = 0;
    int result = 0;

     do{
        result = pow(2, i);
        i++;
     } while (pow(2,i) <= j);

     printf("You better stand at position: %d\n", (j-result) * 2 + 1);
}
