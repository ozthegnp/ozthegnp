int sum(int number){
    static int result = 0;
    for(int i = 1; i <= number; i++){
        result += i;
    }
    return result;


}
