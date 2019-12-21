#include <stdio.h>
void main()
{
    //for identity owner or buyer.......
    int identify;
    //for buyer scan floor number.....
    int floor;
    //for buyer scan flat number.....
    int flat;

    //house floor-1 flat-4 bill-5.....
    float house_floor1_flat1_bill1,house_floor1_flat1_bill2,house_floor1_flat1_bill3,house_floor1_flat1_bill4,house_floor1_flat1_bill5;
    float house_floor1_flat2_bill1,house_floor1_flat2_bill2,house_floor1_flat2_bill3,house_floor1_flat2_bill4,house_floor1_flat2_bill5;
    float house_floor1_flat3_bill1,house_floor1_flat3_bill2,house_floor1_flat3_bill3,house_floor1_flat3_bill4,house_floor1_flat3_bill5;
    float house_floor1_flat4_bill1,house_floor1_flat4_bill2,house_floor1_flat4_bill3,house_floor1_flat4_bill4,house_floor1_flat4_bill5;
    //house floor-2 flat-4 bill-5.....
    float house_floor2_flat1_bill1,house_floor2_flat1_bill2,house_floor2_flat1_bill3,house_floor2_flat1_bill4,house_floor2_flat1_bill5;
    float house_floor2_flat2_bill1,house_floor2_flat2_bill2,house_floor2_flat2_bill3,house_floor2_flat2_bill4,house_floor2_flat2_bill5;
    float house_floor2_flat3_bill1,house_floor2_flat3_bill2,house_floor2_flat3_bill3,house_floor2_flat3_bill4,house_floor2_flat3_bill5;
    float house_floor2_flat4_bill1,house_floor2_flat4_bill2,house_floor2_flat4_bill3,house_floor2_flat4_bill4,house_floor2_flat4_bill5;
     //house floor-3 flat-4 bill-5.....
    float house_floor3_flat1_bill1,house_floor3_flat1_bill2,house_floor3_flat1_bill3,house_floor3_flat1_bill4,house_floor3_flat1_bill5;
    float house_floor3_flat2_bill1,house_floor3_flat2_bill2,house_floor3_flat2_bill3,house_floor3_flat2_bill4,house_floor3_flat2_bill5;
    float house_floor3_flat3_bill1,house_floor3_flat3_bill2,house_floor3_flat3_bill3,house_floor3_flat3_bill4,house_floor3_flat3_bill5;
    float house_floor3_flat4_bill1,house_floor3_flat4_bill2,house_floor3_flat4_bill3,house_floor3_flat4_bill4,house_floor3_flat4_bill5;
     //house floor-4 flat-4 bill-5.....
    float house_floor4_flat1_bill1,house_floor4_flat1_bill2,house_floor4_flat1_bill3,house_floor4_flat1_bill4,house_floor4_flat1_bill5;
    float house_floor4_flat2_bill1,house_floor4_flat2_bill2,house_floor4_flat2_bill3,house_floor4_flat2_bill4,house_floor4_flat2_bill5;
    float house_floor4_flat3_bill1,house_floor4_flat3_bill2,house_floor4_flat3_bill3,house_floor4_flat3_bill4,house_floor4_flat3_bill5;
    float house_floor4_flat4_bill1,house_floor4_flat4_bill2,house_floor4_flat4_bill3,house_floor4_flat4_bill4,house_floor4_flat4_bill5;
    //house floor-5 flat-4 bill-5.....
    float house_floor5_flat1_bill1,house_floor5_flat1_bill2,house_floor5_flat1_bill3,house_floor5_flat1_bill4,house_floor5_flat1_bill5;
    float house_floor5_flat2_bill1,house_floor5_flat2_bill2,house_floor5_flat2_bill3,house_floor5_flat2_bill4,house_floor5_flat2_bill5;
    float house_floor5_flat3_bill1,house_floor5_flat3_bill2,house_floor5_flat3_bill3,house_floor5_flat3_bill4,house_floor5_flat3_bill5;
    float house_floor5_flat4_bill1,house_floor5_flat4_bill2,house_floor5_flat4_bill3,house_floor5_flat4_bill4,house_floor5_flat4_bill5;

    //for total rent......
   float house_floor1_flat1_total_rent;
   float house_floor1_flat2_total_rent;
   float house_floor1_flat3_total_rent;
   float house_floor1_flat4_total_rent;
   float house_floor2_flat1_total_rent;
   float house_floor2_flat2_total_rent;
   float house_floor2_flat3_total_rent;
   float house_floor2_flat4_total_rent;
   float house_floor3_flat1_total_rent;
   float house_floor3_flat2_total_rent;
   float house_floor3_flat3_total_rent;
   float house_floor3_flat4_total_rent;
   float house_floor4_flat1_total_rent;
   float house_floor4_flat2_total_rent;
   float house_floor4_flat3_total_rent;
   float house_floor4_flat4_total_rent;
   float house_floor5_flat1_total_rent;
   float house_floor5_flat2_total_rent;
   float house_floor5_flat3_total_rent;
   float house_floor5_flat4_total_rent;


    //identify the Owner and Buyer......

    printf("If you Owner press: 1\n");
    printf("If you Buyer press: 2\n");
    scanf("%d",&identify);

    switch (identify){

        //Details of owner......
        case 1:{
            //enter  1st floor 1st flat information.....
             printf("enter 1st floor-1st flat rent:");
             scanf("%f",&house_floor1_flat1_bill1);
             printf("enter 1st floor-1st flat Water bill:");
             scanf("%f",&house_floor1_flat1_bill2);
             printf("enter 1st floor-1st flat Electric bill:");
             scanf("%f",&house_floor1_flat1_bill3);
             printf("enter 1st floor-1st flat Gas bill:");
             scanf("%f",&house_floor1_flat1_bill4);
             printf("enter 1st floor-1st flat Extra Cost:");
             scanf("%f",&house_floor1_flat1_bill5);

             //calculate total rent for 1st flat in 1st floor .....
             house_floor1_flat1_total_rent=0;
             house_floor1_flat1_total_rent=house_floor1_flat1_total_rent+house_floor1_flat1_bill1;
             house_floor1_flat1_total_rent=house_floor1_flat1_total_rent+house_floor1_flat1_bill2;
             house_floor1_flat1_total_rent=house_floor1_flat1_total_rent+house_floor1_flat1_bill3;
             house_floor1_flat1_total_rent=house_floor1_flat1_total_rent+house_floor1_flat1_bill4;
             house_floor1_flat1_total_rent=house_floor1_flat1_total_rent+house_floor1_flat1_bill5;
             printf("Total rent for flat one:%f\n\n",house_floor1_flat1_total_rent);

            //enter 1st floor 2nd flat information......
             printf("enter 1st floor-2nd flat rent:");
             scanf("%f",&house_floor1_flat2_bill1);
             printf("enter 1st floor-2nd flat Water bill:");
             scanf("%f",&house_floor1_flat2_bill2);
             printf("enter 1st floor-2nd flat Electric bill:");
             scanf("%f",&house_floor1_flat2_bill3);
             printf("enter 1st floor-2nd flat Gas bill:");
             scanf("%f",&house_floor1_flat2_bill4);
             printf("enter 1st floor-2nd flat Extra Cost:");
             scanf("%f",&house_floor1_flat2_bill5);

             //calculate total rent for 2nd flat in 1st floor .....
             house_floor1_flat2_total_rent=0;
             house_floor1_flat2_total_rent=house_floor1_flat2_total_rent+house_floor1_flat2_bill1;
             house_floor1_flat2_total_rent=house_floor1_flat2_total_rent+house_floor1_flat2_bill2;
             house_floor1_flat2_total_rent=house_floor1_flat2_total_rent+house_floor1_flat2_bill3;
             house_floor1_flat2_total_rent=house_floor1_flat2_total_rent+house_floor1_flat2_bill4;
             house_floor1_flat2_total_rent=house_floor1_flat2_total_rent+house_floor1_flat2_bill5;
             printf("Total rent for 1st floor flat number 2 :%f\n\n",house_floor1_flat2_total_rent);

              //enter 1st floor 3rd flat information......
             printf("enter 1st floor-3rd flat rent:");
             scanf("%f",&house_floor1_flat3_bill1);
             printf("enter 1st floor-3rd flat Water bill:");
             scanf("%f",&house_floor1_flat3_bill2);
             printf("enter 1st floor-3rd flat Electric bill:");
             scanf("%f",&house_floor1_flat3_bill3);
             printf("enter 1st floor-3rd flat Gas bill:");
             scanf("%f",&house_floor1_flat3_bill4);
             printf("enter 1st floor-3rd flat Extra Cost:");
             scanf("%f",&house_floor1_flat3_bill5);

             //calculate total rent for 3rd flat in 1st floor .....
             house_floor1_flat3_total_rent=0;
             house_floor1_flat3_total_rent=house_floor1_flat3_total_rent+house_floor1_flat3_bill1;
             house_floor1_flat3_total_rent=house_floor1_flat3_total_rent+house_floor1_flat3_bill2;
             house_floor1_flat3_total_rent=house_floor1_flat3_total_rent+house_floor1_flat3_bill3;
             house_floor1_flat3_total_rent=house_floor1_flat3_total_rent+house_floor1_flat3_bill4;
             house_floor1_flat3_total_rent=house_floor1_flat3_total_rent+house_floor1_flat3_bill5;
             printf("Total rent for 1st floor flat number 3:%f\n\n",house_floor1_flat3_total_rent);


             //enter 1st floor 4th flat information......
             printf("enter 1st floor-4th flat rent:");
             scanf("%f",&house_floor1_flat4_bill1);
             printf("enter 1st floor-4th flat Water bill:");
             scanf("%f",&house_floor1_flat4_bill2);
             printf("enter 1st floor-4th flat Electric bill:");
             scanf("%f",&house_floor1_flat4_bill3);
             printf("enter 1st floor-4th flat Gas bill:");
             scanf("%f",&house_floor1_flat4_bill4);
             printf("enter 1st floor-4th flat Extra Cost:");
             scanf("%f",&house_floor1_flat4_bill5);

             //calculate total rent for 4th flat in 1st floor .....
             house_floor1_flat4_total_rent=0;
             house_floor1_flat4_total_rent=house_floor1_flat4_total_rent+house_floor1_flat4_bill1;
             house_floor1_flat4_total_rent=house_floor1_flat4_total_rent+house_floor1_flat4_bill2;
             house_floor1_flat4_total_rent=house_floor1_flat4_total_rent+house_floor1_flat4_bill3;
             house_floor1_flat4_total_rent=house_floor1_flat4_total_rent+house_floor1_flat4_bill4;
             house_floor1_flat4_total_rent=house_floor1_flat4_total_rent+house_floor1_flat4_bill5;
             printf("Total rent for 1st floor flat number 4:%f\n\n",house_floor1_flat4_total_rent);


              //enter 2nd floor 1st flat information......
             printf("enter 2nd floor-1st flat rent:");
             scanf("%f",&house_floor2_flat1_bill1);
             printf("enter 2nd floor - 1st flat Water bill:");
             scanf("%f",&house_floor2_flat1_bill2);
             printf("enter 2nd floor-1st flat Electric bill:");
             scanf("%f",&house_floor2_flat1_bill3);
             printf("enter 2nd floor-1st flat Gas bill:");
             scanf("%f",&house_floor2_flat1_bill4);
             printf("enter 2nd floor-1st flat Extra Cost:");
             scanf("%f",&house_floor2_flat1_bill5);

             //calculate total rent for 1st flat in 2nd floor .....
             house_floor2_flat1_total_rent=0;
             house_floor2_flat1_total_rent=house_floor2_flat1_total_rent+house_floor2_flat1_bill1;
             house_floor2_flat1_total_rent=house_floor2_flat1_total_rent+house_floor2_flat1_bill2;
             house_floor2_flat1_total_rent=house_floor2_flat1_total_rent+house_floor2_flat1_bill3;
             house_floor2_flat1_total_rent=house_floor2_flat1_total_rent+house_floor2_flat1_bill4;
             house_floor2_flat1_total_rent=house_floor2_flat1_total_rent+house_floor2_flat1_bill5;
             printf("Total rent for 2nd floor flat number 1 :%f\n\n",house_floor2_flat1_total_rent);


             //enter 2nd floor 2nd flat information......
             printf("enter 2nd floor-2nd flat rent:");
             scanf("%f",&house_floor2_flat2_bill1);
             printf("enter 2nd floor-2nd flat Water bill:");
             scanf("%f",&house_floor2_flat2_bill2);
             printf("enter 2nd floor-2nd flat Electric bill:");
             scanf("%f",&house_floor2_flat2_bill3);
             printf("enter 2nd floor-2nd flat Gas bill:");
             scanf("%f",&house_floor2_flat2_bill4);
             printf("enter 2nd floor-2nd flat Extra Cost:");
             scanf("%f",&house_floor2_flat2_bill5);

             //calculate total rent for 2nd flat in 2nd floor .....
             house_floor2_flat2_total_rent=0;
             house_floor2_flat2_total_rent=house_floor2_flat2_total_rent+house_floor2_flat2_bill1;
             house_floor2_flat2_total_rent=house_floor2_flat2_total_rent+house_floor2_flat2_bill2;
             house_floor2_flat2_total_rent=house_floor2_flat2_total_rent+house_floor2_flat2_bill3;
             house_floor2_flat2_total_rent=house_floor2_flat2_total_rent+house_floor2_flat2_bill4;
             house_floor2_flat2_total_rent=house_floor2_flat2_total_rent+house_floor2_flat2_bill5;
             printf("Total rent for 2nd floor flat number two :%f\n\n",house_floor2_flat2_total_rent);


             //enter 2nd floor 3rd flat information......
             printf("enter 2nd floor-3rd flat rent:");
             scanf("%f",&house_floor2_flat3_bill1);
             printf("enter 2nd floor- 3rd flat Water bill:");
             scanf("%f",&house_floor2_flat3_bill2);
             printf("enter 2nd floor- 3rd flat Electric bill:");
             scanf("%f",&house_floor2_flat3_bill3);
             printf("enter 2nd floor- 3rd flat Gas bill:");
             scanf("%f",&house_floor2_flat3_bill4);
             printf("enter 2nd floor- 3rd flat Extra Cost:");
             scanf("%f",&house_floor2_flat3_bill5);

             //calculate total rent for 3rd flat in 2nd floor .....
             house_floor2_flat3_total_rent=0;
             house_floor2_flat3_total_rent=house_floor2_flat3_total_rent+house_floor2_flat3_bill1;
             house_floor2_flat3_total_rent=house_floor2_flat3_total_rent+house_floor2_flat3_bill2;
             house_floor2_flat3_total_rent=house_floor2_flat3_total_rent+house_floor2_flat3_bill3;
             house_floor2_flat3_total_rent=house_floor2_flat3_total_rent+house_floor2_flat3_bill4;
             house_floor2_flat3_total_rent=house_floor2_flat3_total_rent+house_floor2_flat3_bill5;
             printf("Total rent for 2nd floor flat number three :%f\n\n",house_floor2_flat3_total_rent);


             //enter 2nd floor 4th flat information......
             printf("enter 2nd floor- 4th flat rent:");
             scanf("%f",&house_floor2_flat4_bill1);
             printf("enter 2nd floor- 4th flat Water bill:");
             scanf("%f",&house_floor2_flat4_bill2);
             printf("enter 2nd floor- 4th flat Electric bill:");
             scanf("%f",&house_floor2_flat4_bill3);
             printf("enter 2nd floor- 4th flat Gas bill:");
             scanf("%f",&house_floor2_flat4_bill4);
             printf("enter 2nd floor- 4th flat Extra Cost:");
             scanf("%f",&house_floor2_flat4_bill5);

             //calculate total rent for 4th flat in 2nd floor .....
             house_floor2_flat4_total_rent=0;
             house_floor2_flat4_total_rent=house_floor2_flat4_total_rent+house_floor2_flat4_bill1;
             house_floor2_flat4_total_rent=house_floor2_flat4_total_rent+house_floor2_flat4_bill2;
             house_floor2_flat4_total_rent=house_floor2_flat4_total_rent+house_floor2_flat4_bill3;
             house_floor2_flat4_total_rent=house_floor2_flat4_total_rent+house_floor2_flat4_bill4;
             house_floor2_flat4_total_rent=house_floor2_flat4_total_rent+house_floor2_flat4_bill5;
             printf("Total rent for 2nd floor flat number four :%f\n\n",house_floor2_flat4_total_rent);


             //enter 3rd floor 1st flat information......
             printf("enter 3rd floor-1st flat rent:");
             scanf("%f",&house_floor3_flat1_bill1);
             printf("enter 3rd floor-1st flat Water bill:");
             scanf("%f",&house_floor3_flat1_bill2);
             printf("enter 3rd floor-1st flat Electric bill:");
             scanf("%f",&house_floor3_flat1_bill3);
             printf("enter 3rd floor-1st flat Gas bill:");
             scanf("%f",&house_floor3_flat1_bill4);
             printf("enter 3rd floor-1st flat Extra Cost:");
             scanf("%f",&house_floor3_flat1_bill5);

             //calculate total rent for 1st flat in 3rd floor .....
             house_floor3_flat1_total_rent=0;
             house_floor3_flat1_total_rent=house_floor3_flat1_total_rent+house_floor3_flat1_bill1;
             house_floor3_flat1_total_rent=house_floor3_flat1_total_rent+house_floor3_flat1_bill2;
             house_floor3_flat1_total_rent=house_floor3_flat1_total_rent+house_floor3_flat1_bill3;
             house_floor3_flat1_total_rent=house_floor3_flat1_total_rent+house_floor3_flat1_bill4;
             house_floor3_flat1_total_rent=house_floor3_flat1_total_rent+house_floor3_flat1_bill5;
             printf("Total rent for 3rd floor flat number one :%f\n\n",house_floor3_flat1_total_rent);


             //enter 3rd floor 2nd flat information......
             printf("enter 3rd floor-2nd flat rent:");
             scanf("%f",&house_floor3_flat2_bill1);
             printf("enter 3rd floor-2nd flat Water bill:");
             scanf("%f",&house_floor3_flat2_bill2);
             printf("enter 3rd floor-2nd flat Electric bill:");
             scanf("%f",&house_floor3_flat2_bill3);
             printf("enter 3rd floor-2nd flat Gas bill:");
             scanf("%f",&house_floor3_flat2_bill4);
             printf("enter 3rd floor-2nd flat Extra Cost:");
             scanf("%f",&house_floor3_flat2_bill5);

             //calculate total rent for 2st flat in 3rd floor .....
             house_floor3_flat2_total_rent=0;
             house_floor3_flat2_total_rent=house_floor3_flat2_total_rent+house_floor3_flat2_bill1;
             house_floor3_flat2_total_rent=house_floor3_flat2_total_rent+house_floor3_flat2_bill2;
             house_floor3_flat2_total_rent=house_floor3_flat2_total_rent+house_floor3_flat2_bill3;
             house_floor3_flat2_total_rent=house_floor3_flat2_total_rent+house_floor3_flat2_bill4;
             house_floor3_flat2_total_rent=house_floor3_flat2_total_rent+house_floor3_flat2_bill5;
             printf("Total rent for 3rd floor flat number two :%f\n\n",house_floor3_flat2_total_rent);

             //enter 3rd floor 3rd flat information......
             printf("enter 3rd floor- 3rd flat rent:");
             scanf("%f",&house_floor3_flat3_bill1);
             printf("enter 3rd floor- 3rd flat Water bill:");
             scanf("%f",&house_floor3_flat3_bill2);
             printf("enter 3rd floor- 3rd flat Electric bill:");
             scanf("%f",&house_floor3_flat3_bill3);
             printf("enter 3rd floor- 3rd flat Gas bill:");
             scanf("%f",&house_floor3_flat3_bill4);
             printf("enter 3rd floor- 3rd flat Extra Cost:");
             scanf("%f",&house_floor3_flat3_bill5);

             //calculate total rent for 3rd flat in 3rd floor .....
             house_floor3_flat3_total_rent=0;
             house_floor3_flat3_total_rent=house_floor3_flat3_total_rent+house_floor3_flat3_bill1;
             house_floor3_flat3_total_rent=house_floor3_flat3_total_rent+house_floor3_flat3_bill2;
             house_floor3_flat3_total_rent=house_floor3_flat3_total_rent+house_floor3_flat3_bill3;
             house_floor3_flat3_total_rent=house_floor3_flat3_total_rent+house_floor3_flat3_bill4;
             house_floor3_flat3_total_rent=house_floor3_flat3_total_rent+house_floor3_flat3_bill5;
             printf("Total rent for 3rd floor flat number three :%f\n\n",house_floor3_flat3_total_rent);


             //enter 3rd floor 4th flat information......
             printf("enter 3rd floor- 4th flat rent:");
             scanf("%f",&house_floor3_flat4_bill1);
             printf("enter 3rd floor- 4th flat Water bill:");
             scanf("%f",&house_floor3_flat4_bill2);
             printf("enter 3rd floor- 4th flat Electric bill:");
             scanf("%f",&house_floor3_flat4_bill3);
             printf("enter 3rd floor- 4th flat Gas bill:");
             scanf("%f",&house_floor3_flat4_bill4);
             printf("enter 3rd floor- 4th flat Extra Cost:");
             scanf("%f",&house_floor3_flat4_bill5);

             //calculate total rent for 4th flat in 3rd floor .....
             house_floor3_flat4_total_rent=0;
             house_floor3_flat4_total_rent=house_floor3_flat4_total_rent+house_floor3_flat4_bill1;
             house_floor3_flat4_total_rent=house_floor3_flat4_total_rent+house_floor3_flat4_bill2;
             house_floor3_flat4_total_rent=house_floor3_flat4_total_rent+house_floor3_flat4_bill3;
             house_floor3_flat4_total_rent=house_floor3_flat4_total_rent+house_floor3_flat4_bill4;
             house_floor3_flat4_total_rent=house_floor3_flat4_total_rent+house_floor3_flat4_bill5;
             printf("Total rent for 3rd floor flat number four :%f\n\n",house_floor3_flat4_total_rent);


             //enter 4th floor 1st flat information......
             printf("enter 4th floor-1st flat rent:");
             scanf("%f",&house_floor4_flat1_bill1);
             printf("enter 4th floor-1st flat Water bill:");
             scanf("%f",&house_floor4_flat1_bill2);
             printf("enter 4th floor-1st flat Electric bill:");
             scanf("%f",&house_floor4_flat1_bill3);
             printf("enter 4th floor-1st flat Gas bill:");
             scanf("%f",&house_floor4_flat1_bill4);
             printf("enter 4th floor-1st flat Extra Cost:");
             scanf("%f",&house_floor4_flat1_bill5);

             //calculate total rent for 1st flat in 4th floor .....
             house_floor4_flat1_total_rent=0;
             house_floor4_flat1_total_rent=house_floor4_flat1_total_rent+house_floor4_flat1_bill1;
             house_floor4_flat1_total_rent=house_floor4_flat1_total_rent+house_floor4_flat1_bill2;
             house_floor4_flat1_total_rent=house_floor4_flat1_total_rent+house_floor4_flat1_bill3;
             house_floor4_flat1_total_rent=house_floor4_flat1_total_rent+house_floor4_flat1_bill4;
             house_floor4_flat1_total_rent=house_floor4_flat1_total_rent+house_floor4_flat1_bill5;
             printf("Total rent for 4th floor flat number one :%f\n\n",house_floor4_flat1_total_rent);


             //enter 4th floor 2nd flat information......
             printf("enter 4th floor-2nd flat rent:");
             scanf("%f",&house_floor4_flat2_bill1);
             printf("enter 4th floor-2nd flat Water bill:");
             scanf("%f",&house_floor4_flat2_bill2);
             printf("enter 4th floor-2nd flat Electric bill:");
             scanf("%f",&house_floor4_flat2_bill3);
             printf("enter 4th floor-2nd flat Gas bill:");
             scanf("%f",&house_floor4_flat2_bill4);
             printf("enter 4th floor-2nd flat Extra Cost:");
             scanf("%f",&house_floor4_flat2_bill5);

             //calculate total rent for 2nd flat in 4th floor .....
             house_floor4_flat2_total_rent=0;
             house_floor4_flat2_total_rent=house_floor4_flat2_total_rent+house_floor4_flat2_bill1;
             house_floor4_flat2_total_rent=house_floor4_flat2_total_rent+house_floor4_flat2_bill2;
             house_floor4_flat2_total_rent=house_floor4_flat2_total_rent+house_floor4_flat2_bill3;
             house_floor4_flat2_total_rent=house_floor4_flat2_total_rent+house_floor4_flat2_bill4;
             house_floor4_flat2_total_rent=house_floor4_flat2_total_rent+house_floor4_flat2_bill5;
             printf("Total rent for 4th floor flat number two:%f\n\n",house_floor4_flat2_total_rent);


             //enter 4th floor 3rd flat information......
             printf("enter 4th floor- 3rd flat rent:");
             scanf("%f",&house_floor4_flat3_bill1);
             printf("enter 4th floor- 3rd flat Water bill:");
             scanf("%f",&house_floor4_flat3_bill2);
             printf("enter 4th floor- 3rd flat Electric bill:");
             scanf("%f",&house_floor4_flat3_bill3);
             printf("enter 4th floor- 3rd flat Gas bill:");
             scanf("%f",&house_floor4_flat3_bill4);
             printf("enter 4th floor- 3rd flat Extra Cost:");
             scanf("%f",&house_floor4_flat3_bill5);

             //calculate total rent for 3rd flat in 4th floor .....
             house_floor4_flat3_total_rent=0;
             house_floor4_flat3_total_rent=house_floor4_flat3_total_rent+house_floor4_flat3_bill1;
             house_floor4_flat3_total_rent=house_floor4_flat3_total_rent+house_floor4_flat3_bill2;
             house_floor4_flat3_total_rent=house_floor4_flat3_total_rent+house_floor4_flat3_bill3;
             house_floor4_flat3_total_rent=house_floor4_flat3_total_rent+house_floor4_flat3_bill4;
             house_floor4_flat3_total_rent=house_floor4_flat3_total_rent+house_floor4_flat3_bill5;
             printf("Total rent for 4th floor flat number three :%f\n\n",house_floor4_flat3_total_rent);


             //enter 4th floor 4th flat information......
             printf("enter 4th floor- 4th flat rent:");
             scanf("%f",&house_floor4_flat4_bill1);
             printf("enter 4th floor-4th flat Water bill:");
             scanf("%f",&house_floor4_flat4_bill2);
             printf("enter 4th floor- 4th flat Electric bill:");
             scanf("%f",&house_floor4_flat4_bill3);
             printf("enter 4th floor- 4th flat Gas bill:");
             scanf("%f",&house_floor4_flat4_bill4);
             printf("enter 4th floor- 4th flat Extra Cost:");
             scanf("%f",&house_floor4_flat4_bill5);

             //calculate total rent for 4th flat in 4th floor .....
             house_floor4_flat4_total_rent=0;
             house_floor4_flat4_total_rent=house_floor4_flat4_total_rent+house_floor4_flat4_bill1;
             house_floor4_flat4_total_rent=house_floor4_flat4_total_rent+house_floor4_flat4_bill2;
             house_floor4_flat4_total_rent=house_floor4_flat4_total_rent+house_floor4_flat4_bill3;
             house_floor4_flat4_total_rent=house_floor4_flat4_total_rent+house_floor4_flat4_bill4;
             house_floor4_flat4_total_rent=house_floor4_flat4_total_rent+house_floor4_flat4_bill5;
             printf("Total rent for 4th floor flat number four :%f\n\n",house_floor4_flat4_total_rent);


              //enter 5th floor 1st flat information......
             printf("enter 5th floor-1st flat rent:");
             scanf("%f",&house_floor5_flat1_bill1);
             printf("enter 5th floor-1st flat Water bill:");
             scanf("%f",&house_floor5_flat1_bill2);
             printf("enter 5th floor-1st flat Electric bill:");
             scanf("%f",&house_floor5_flat1_bill3);
             printf("enter 5th floor-1st flat Gas bill:");
             scanf("%f",&house_floor5_flat1_bill4);
             printf("enter 5th floor-1st flat Extra Cost:");
             scanf("%f",&house_floor5_flat1_bill5);

             //calculate total rent for 1st flat in 5th floor .....
             house_floor5_flat1_total_rent=0;
             house_floor5_flat1_total_rent=house_floor5_flat1_total_rent+house_floor5_flat1_bill1;
             house_floor5_flat1_total_rent=house_floor5_flat1_total_rent+house_floor5_flat1_bill2;
             house_floor5_flat1_total_rent=house_floor5_flat1_total_rent+house_floor5_flat1_bill3;
             house_floor5_flat1_total_rent=house_floor5_flat1_total_rent+house_floor5_flat1_bill4;
             house_floor5_flat1_total_rent=house_floor5_flat1_total_rent+house_floor5_flat1_bill5;
             printf("Total rent for 5th floor flat number one: %f\n\n",house_floor5_flat1_total_rent);


             //enter 5th floor 2nd flat information......
             printf("enter 5th floor-2nd flat rent:");
             scanf("%f",&house_floor5_flat2_bill1);
             printf("enter 5th floor-2nd flat Water bill:");
             scanf("%f",&house_floor5_flat2_bill2);
             printf("enter 5th floor-2nd flat Electric bill:");
             scanf("%f",&house_floor5_flat2_bill3);
             printf("enter 5th floor-2nd flat Gas bill:");
             scanf("%f",&house_floor5_flat2_bill4);
             printf("enter 5th floor-2nd flat Extra Cost:");
             scanf("%f",&house_floor5_flat2_bill5);

             //calculate total rent for 2nd flat in 5th floor .....
             house_floor5_flat2_total_rent=0;
             house_floor5_flat2_total_rent=house_floor5_flat2_total_rent+house_floor5_flat2_bill1;
             house_floor5_flat2_total_rent=house_floor5_flat2_total_rent+house_floor5_flat2_bill2;
             house_floor5_flat2_total_rent=house_floor5_flat2_total_rent+house_floor5_flat2_bill3;
             house_floor5_flat2_total_rent=house_floor5_flat2_total_rent+house_floor5_flat2_bill4;
             house_floor5_flat2_total_rent=house_floor5_flat2_total_rent+house_floor5_flat2_bill5;
             printf("Total rent for 5th floor flat number two : %f\n\n",house_floor5_flat2_total_rent);


             //enter 5th floor 3rd flat information......
             printf("enter 5th floor-3rd flat rent:");
             scanf("%f",&house_floor5_flat3_bill1);
             printf("enter 5th floor- 3rd flat Water bill:");
             scanf("%f",&house_floor5_flat3_bill2);
             printf("enter 5th floor- 3rd flat Electric bill:");
             scanf("%f",&house_floor5_flat3_bill3);
             printf("enter 5th floor- 3rd flat Gas bill:");
             scanf("%f",&house_floor5_flat3_bill4);
             printf("enter 5th floor- 3rd flat Extra Cost:");
             scanf("%f",&house_floor5_flat3_bill5);

             //calculate total rent for 3rd flat in 5th floor .....
             house_floor5_flat3_total_rent=0;
             house_floor5_flat3_total_rent=house_floor5_flat3_total_rent+house_floor5_flat3_bill1;
             house_floor5_flat3_total_rent=house_floor5_flat3_total_rent+house_floor5_flat3_bill2;
             house_floor5_flat3_total_rent=house_floor5_flat3_total_rent+house_floor5_flat3_bill3;
             house_floor5_flat3_total_rent=house_floor5_flat3_total_rent+house_floor5_flat3_bill4;
             house_floor5_flat3_total_rent=house_floor5_flat3_total_rent+house_floor5_flat3_bill5;
             printf("Total rent for 5th floor flat number three :%f\n\n",house_floor5_flat3_total_rent);


             //enter 5th floor 4th flat information......
             printf("enter 5th floor- 4th flat rent:");
             scanf("%f",&house_floor5_flat4_bill1);
             printf("enter 5th floor- 4th flat Water bill:");
             scanf("%f",&house_floor5_flat4_bill2);
             printf("enter 5th floor- 4th flat Electric bill:");
             scanf("%f",&house_floor5_flat4_bill3);
             printf("enter 5th floor- 4th flat Gas bill:");
             scanf("%f",&house_floor5_flat4_bill4);
             printf("enter 5th floor- 4th flat Extra Cost:");
             scanf("%f",&house_floor5_flat4_bill5);

             //calculate total rent for 4th flat in 5th floor .....
             house_floor5_flat4_total_rent=0;
             house_floor5_flat4_total_rent=house_floor5_flat4_total_rent+house_floor5_flat4_bill1;
             house_floor5_flat4_total_rent=house_floor5_flat4_total_rent+house_floor5_flat4_bill2;
             house_floor5_flat4_total_rent=house_floor5_flat4_total_rent+house_floor5_flat4_bill3;
             house_floor5_flat4_total_rent=house_floor5_flat4_total_rent+house_floor5_flat4_bill4;
             house_floor5_flat4_total_rent=house_floor5_flat4_total_rent+house_floor5_flat4_bill5;
             printf("Total rent for 5th floor flat number four :%f\n\n",house_floor5_flat4_total_rent);


            break;
        }
        case 2:{

            printf("How many floor want to see :");
            scanf("%d",&floor);
            //for first floor..........
            if(floor==1){
                printf("How many flat want to see :");
                scanf("%d",&flat);
                if(flat==1){
                    printf("Total room:5\n Corridor :4\n Washroom :3\n Total rent :15,000");
                }
                 else if(flat==2){
                    printf("Total room:5\n Corridor :3\n Washroom :3\n Total rent :14,000");
                }
                 else if(flat==3){
                    printf("Total room:4\n Corridor :4\n Washroom :3\n Total rent :14,000");
                }
                 else if(flat==4){
                    printf("Total room:4\n Corridor :3\n Washroom :2\n Total rent :13,000");
                }
                else{
                    printf("The 4th flat limited");
                }

            }

            //for second floor..........
            else if(floor==2){
                printf("How many flat want to see :");
                scanf("%d",&flat);
                if(flat==1){
                    printf("Total room: 6\n Corridor :5\n Washroom: 3\n Total rent: 19,000");
                }
                 else if(flat==2){
                    printf("Total room: 5\n Corridor :4\n Washroom: 3\n Total rent: 14,000");
                }
                 else if(flat==3){
                    printf("Total room: 5\n Corridor :4\n Washroom: 3\n Total rent: 14,000");
                }
                 else if(flat==4){
                    printf("Total room: 4\n Corridor :3\n Washroom: 3\n Total rent: 13,000");
                }
                else{
                    printf("The 4th flat limited");
                }
            }

            //for 3rd floor..........
            else if(floor==3){
                printf("How many flat want to see :");
                scanf("%d",&flat);
                if(flat==1){
                    printf("Total room:5\n Corridor :4\n Washroom :3\n Total rent :14,000");
                }
                 else if(flat==2){
                    printf("Total room:5\n Corridor :3\n Washroom :3\n Total rent :13,000");
                }
                 else if(flat==3){
                    printf("Total room:4\n Corridor :4\n Washroom :3\n Total rent :12,000");
                }
                 else if(flat==4){
                    printf("Total room:3\n Corridor :3\n Washroom :2\n Total rent :11,000");
                }
                else{
                    printf("The 4th flat limited");
                }
            }

            //for 4th floor..........
            else if(floor==4){
                printf("How many flat want to see :");
                scanf("%d",&flat);
                if(flat==1){
                    printf("Total room:5\n Corridor :4\n Washroom :3\n Total rent :11,000");
                }
                 else if(flat==2){
                    printf("Total room:5\n Corridor :4\n Washroom :4\n Total rent :12,000");
                }
                 else if(flat==3){
                    printf("Total room:5\n Corridor :4\n Washroom :3\n Total rent :11,000");
                }
                 else if(flat==4){
                    printf("Total room:4\n Corridor :3\n Washroom :2\n Total rent :10,000");
                }
                else{
                    printf("The 4th flat limited");
                }
            }

            //for 5th floor..........
            else if(floor==5){
                printf("How many flat want to see :");
                scanf("%d",&flat);
                if(flat==1){
                    printf("Total room:5\n Corridor :4\n Washroom :3\n Total rent :10,000");
                }
                 else if(flat==2){
                    printf("Total room:5\n Corridor :4\n Washroom :4\n Total rent :10,500");
                }
                 else if(flat==3){
                    printf("Total room:5\n Corridor :4\n Washroom :3\n Total rent :10,000");
                }
                 else if(flat==4){
                    printf("Total room:4\n Corridor :3\n Washroom :2\n Total rent :8,000");
                }
                else{
                    printf("The 4th flat limited");
                }
            }
            else{
                printf("The 5th floor limited");
            }
        }
    }
}
