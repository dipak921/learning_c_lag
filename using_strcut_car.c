#include<stdio.h>
struct car
{
    char car_name[20];
    char car_model[50];
    int car_year;
    float car_price;

};


int main()
{
    struct car c1 ={"Mahindra BE 6","BE 6 (electric compact crossover SUV)",2025,18.90};

    struct car c2 ={"Maruti Dzire","4th generation Dzire",2024,6.69};

    struct car c3 ={"Volvo XC60","XC60 (facelift version)",2025,71.90};

    struct car c4 ={"Tata Curvv EV","Curvv EV (coupe compact EV SUV)",2024-25,17.49};

    struct car c5 ={"Mahindra XEV 9e","XEV 9e (electric mid-size crossover SUV)",2023-24,30.50};

    printf("\nCar Name :%s\n Car Model : %s\n Manufacturer Year : %d\n Car Price :%f\n",c1.car_name,c1.car_name,c1.car_year,c1.car_price);

    printf("\nCar Name :%s\n Car Model : %s\n Manufacturer Year : %d\n Car Price :%f\n",c2.car_name,c2.car_name,c2.car_year,c2.car_price);
    
    printf("\nCar Name :%s\n Car Model : %s\n Manufacturer Year : %d\n Car Price :%f\n",c3.car_name,c3.car_name,c3.car_year,c3.car_price);

    printf("\nCar Name :%s\n Car Model : %s\n Manufacturer Year : %d\n Car Price :%f\n",c4.car_name,c4.car_name,c4.car_year,c4.car_price);

    printf("\nCar Name :%s\n Car Model : %s\n Manufacturer Year : %d\n Car Price :%f\n",c5.car_name,c5.car_name,c5.car_year,c5.car_price);

    return 0;
}