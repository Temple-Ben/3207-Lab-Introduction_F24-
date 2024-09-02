

char randchar(){
    int limit = 25;

    char letter = rand() % (limit + 1) + 65;

    return letter;
}