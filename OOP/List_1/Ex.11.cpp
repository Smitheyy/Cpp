#include <iostream>


double maxvalueof2Ddoubletable(double tab[][3], int rows){

    double max = tab[0][0];


    for(int i = 0; i < rows; i++){

        for(int j = 0; j < 3; j++){

            if(max < tab[i][j]) max = tab[i][j];

        }
    }

    return max;
}

double minvalueof2Ddoubletable(double tab[][3], int rows){

    double min = tab[0][0];


    for(int i = 0; i < rows; i++){

        for(int j = 0; j < 3; j++){

            if(min > tab[i][j]) min = tab[i][j];

        }
    }

    return min;

}

void display2Ddoubletable(double tab[][3], int rows){

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < 3; j++){

            std::cout << tab[i][j] << '\t';
        }
    }
}