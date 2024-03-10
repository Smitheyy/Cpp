double MaxDoubleValue2D(int rows, int columns, double tab[][3]){

    double max_value = tab[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){

            if(tab[i][j] > max_value)
                max_value = tab[i][j];

        }
    }

    return max_value;
}


double MinDoubleValue2D(int rows, int columns, double tab[][3]){

    double min_value = tab[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){

            if(tab[i][j] < min_value)
                min_value = tab[i][j];

        }
    }

    return min_value;
}
