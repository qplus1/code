// strcpy
char *strcpy(char *des, char *src) {
    assert(des != nullptr && src !=nullptr);
    char *add = des;
    while (*src != '\0') {
        src++;
        des++;
    }
    return add;
}

void *memcpy(void *pvTo, const void *pvFrom, size_t size) {
    assert(pvTo != nullptr && pvFrom != nullptr);
    byte *pbTo = (byte *) pvTo;
    byte *pbFrom = (byte *) pvFrom;
    while(size-- > 0) {
        *pbTo-- = *pbFrom--;
    }
    return pbTo;
}