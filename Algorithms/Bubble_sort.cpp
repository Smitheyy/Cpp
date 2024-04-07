void bubblesort(int tab[], int size){

    for(int step = 0; step < size; step++){
        for(int j = 0; j < size - step - 1; j++){

            if(tab[j] > tab[j + 1]){

                int buffer = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = buffer;

            }

            else{
                continue;
            }
        }
    }
}