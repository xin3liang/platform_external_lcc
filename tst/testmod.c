extern void printf(const char* s,...);

void main(int argc, char** argv) {
    int i;
    for (i = 1; i < 12; i++) {
        printf("%d %% %d = %d\n", i, 3, i % 3);
    }
}