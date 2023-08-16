int getXOR(int a, int b) {
    return a^b;
}

int getBit(int c, int d) {
    return ((d>>c)&1)?1:0;
}

int setBit(int e, int f) {
    return ((1<<e)|f);
}