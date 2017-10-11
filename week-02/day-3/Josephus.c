void main()
{
    int z = 41;

    int i = 0;
    int result = 0;

     do{
        result = pow(2, i);
        i++;
     } while (pow(2,i) < z);

     printf("%d", (z-result) * 2 + 1);
}
