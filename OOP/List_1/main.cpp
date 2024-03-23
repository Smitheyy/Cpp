#include <iostream>
#include "Ex.1.cpp"
#include "Ex.2.cpp"
#include "Ex.3.cpp"
#include "Ex.6.cpp"
#include "Ex.7.cpp"
#include "Ex.8.cpp"
#include "Ex.9.cpp"
#include "Ex.10.cpp"
#include "Ex.11.cpp"
#include "Ex.12.cpp"
#include "Ex.13.cpp"
#include "Ex.14.cpp"
#include "Ex.15.cpp"
#include "Ex.16.cpp"


int main() {

    Point3D p1{}, p2{}; // these objects are used in ex 6 (case 6)

    ComplexNumber z1{}, z2{}, product{}, quotient{};   // these objects are used in ex 13 (case 13)

    Date d1{}, d2{};    // these objects are used in Ex.15 (case 15)

    unsigned int decision = 0;

    int number;     // this variable is used in ex 4 (case 4)
    int a, b, c;    // these variables are used in ex 7 (case 7)

    float f_tab[] = {9.999, 10, 200, -2, 850.2, -7};
    int size_of_f_tab = (sizeof(f_tab) / sizeof(f_tab[0]));     // these variables are used in ex 10 (case 10)

    double d_tab[][3] = {{5.5, 700}, {900, -2, 3}, {21, 1000, -200}};
    int rows = (sizeof(d_tab) / sizeof(d_tab[0]));      // these variables are used in ex 11 (case 11)

    char string[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int s_size = (sizeof(string) / sizeof(string[0]));        // these variables are used in ex.12 (case 12)

    double s1, s2, s3;  // these variables are used in ex.14 (case 14)


    std::cout << "1.Witaj swiecie\n";
    std::cout << "2.Witaj swiecie 13 razy\n";
    std::cout << "3.Zwiekszacz\n";
    std::cout << "4.Zwiekszacz + program\n";
    std::cout << "5.Zwiekszacz + for loop\n";
    std::cout << "6.Count the distance between two points in 3D\n";
    std::cout << "7.Find the greatest value between three integers\n";
    std::cout << "8.Display characters and their ASCII representation\n";
    std::cout << "9.Display digit triangle\n";
    std::cout << "10.Highlight the maximal and minimal value of a float number table\n";
    std::cout << "10.Highlight the maximal and minimal value of a float number table\n";
    std::cout << "11.Highlight the maximal and minimal value of a 2D double number table\n";
    std::cout << "12.Reverse a string\n";
    std::cout << "13.Multiply and divide two complex numbers z1 and z2\n";
    std::cout << "14.Determine whether the given sides can create a triangle and determine its type\n";
    std::cout << "15.Determine an earlier date\n";
    std::cout << "16.Enter n real numbers and determine their sum and mean\n";

    std::cout << "Enter your decision here (number from 1 to 19): ";
    std::cin >> decision;
    std::cout << std::endl;


    switch(decision){

        case 1:

            helloworld();
            break;


        case 2:

            helloworld13t();
            break;


        case 3:

            std::cout << 3 << '\n';
            std::cout << Zwiekszacz(3);

            break;


        case 4:

            std::cout << "Enter a number: ";
            std::cin >> number;
            std::cout << "Zwiekszacz of " << number << " is equal to: " << Zwiekszacz(number);

            break;


        case 5:

            for(int i = 0; i <= 17; i++)
                std::cout << "Argument: " << i << ", zwiekszacz(" << i << ") = " << Zwiekszacz(i) << '\n';

            break;


        case 6:

            std::cout << "Enter the co-ordinates of your first 3D point: ";
            std::cin >> p1.x >> p1.y >> p1.z;

            std::cout << "Enter the co-ordinates of your second 3D point: ";
            std::cin >> p2.x >> p2.y >> p2.z;

            std::cout << "Here are your points:\n";
            std::cout << "a) Point 1; (" << p1.x << ", " << p1.y << ", " << p1.z << ")\n";
            std::cout << "a) Point 2; (" << p2.x << ", " << p2.y << ", " << p2.z << ")\n";
            std::cout << "The distance between these points is equal to: " << distancebetweenpoints(p1, p2);


            break;


        case 7:

            std::cout << "Enter three integers: ";
            std::cin >> a >> b >> c;
            std::cout << "Max number: " << greatestvaluebetween3integers(a, b, c);

            break;


        case 8:

            displaycharacters();
            break;


        case 9:

            displaydigittriangle();
            break;


        case 10:

            std::cout << "Here is your float number table:\n";
            dislayfloattable(f_tab, size_of_f_tab);
            std::cout << std::endl;

            std::cout << "Max value of your float table: " << maxoffloattable(f_tab, size_of_f_tab) << '\n';
            std::cout << "Min value of your float table: " << minoffloattable(f_tab, size_of_f_tab);


            break;


        case 11:

            std::cout << "Here is your 2D double table:\n";
            display2Ddoubletable(d_tab, rows);
            std::cout << std::endl;

            std::cout << "Max value of your double table: " << maxvalueof2Ddoubletable(d_tab, rows) << '\n';
            std::cout << "Min value of your double table: " << minvalueof2Ddoubletable(d_tab, rows);


            break;


        case 12:

            std::cout << "Your string:\n";
            displaystring(string, s_size);
            std::cout << std::endl;

            reverseastring(string, s_size);
            std::cout << "Your reversed string:\n";
            displaystring(string, s_size);


            break;


        case 13:

            std::cout << "Enter the real and imaginary value of your complex number: ";
            std::cin >> z1.real >> z1.imaginary;

            std::cout << "Enter the real and imaginary value of your complex number: ";
            std::cin >> z2.real >> z2.imaginary;


            product = multiplytwocomplexnumbers(z1, z2);
            quotient = dividetwocomplexnumbers(z1, z2);


            std::cout << std::endl;
            std::cout << "The product of z1 and z2 is equal to: " << product.real << " + " << product.imaginary << '\n';
            std::cout << "The quotient of z1 and z2 is equal to: " << quotient.real << " + " << quotient.imaginary;


            break;


        case 14:

            std::cout << "Enter three sides of your  triangle(Enter these values as follows: s1 |space| s2 |space| s3)!: ";
            std::cin >> s1 >> s2 >> s3;

            determinetriangletype(s1, s2, s3);
            break;


        case 15:

            std::cout << "Enter the first date:\n";
            std::cout << "Day: ";
            std::cin >> d1.day;
            std::cout << "Month: ";
            std::cin >> d1.month;
            std::cout << "Year: ";
            std::cin >> d1.year;

            std::cout << "Enter the second date:\n";
            std::cout << "Day: ";
            std::cin >> d2.day;
            std::cout << "Month: ";
            std::cin >> d2.month;
            std::cout << "Year: ";
            std::cin >> d2.year;

            determineanearlierdate(d1, d2);


            break;


        case 16:

            nrealnumbers();
            break;


        default:

            std::cout << "In order to run a solution to one of these problems you have to enter a number between 1 and 19!";
            break;

    }


    return 0;

}
