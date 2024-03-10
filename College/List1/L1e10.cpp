float MaxFloatValue(const float tab[], int size){

    float max_float = tab[0];

    for(int i = 0; i < size; i++) {

        if (tab[i] > max_float)
            max_float = tab[i];

    }

    return max_float;
}


float MinFloatValue(const float tab[], int size){

    float min_value = tab[0];

    for(int i = 0; i < size; i++){

        if(tab[i] < min_value)
            min_value = tab[i];

    }

    return min_value;
}
