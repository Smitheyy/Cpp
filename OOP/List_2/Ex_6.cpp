int nstrlen(const char* n){

    int size_of_n = 0;

    while(n[size_of_n] != '\0')
        size_of_n++;

    return size_of_n;
}

void nstrcpy(char* dest, const char* src) {

    int size_of_dest = nstrlen(dest);

    while (*src != '\0' && size_of_dest + 1> 1) {

        *dest = *src;
        ++dest;
        ++src;
        size_of_dest--;

    }
}

int nstrcmp(const char* n1, const char* n2){

    while(*n1 != '\0' && *n2 != '\0' && *n1 == *n2){
        n1++;
        n2++;
    }

    if(*n1 - *n2 == 0)
        return 0;

    else
        return 1;
}

char* nstrchr(char* n, char z){

    int i = 0;
    while( *n != '\0'){
        if(n[i] == z){
            return n;
        }
        i++;
        n++;
    }
    return nullptr;
}

void nstrrev(char* n){
    int length = nstrlen(n);

    for(int i = 0; i < length / 2; i++){

        char buff = n[i];
        n[i] = n[length - i - 1];               //std::swap(n[i], n[length - i - 1]);
        n[length - i - 1] = buff;

    }
}

