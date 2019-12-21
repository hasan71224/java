#include <stdio.h>
void main()
{
    //for identity owner or buyer.......
    int identify;
    //house floor-1 flat-4 bill-5.....
    float house_floor_flat_bill[5][4][5];
    //for total rent......
    float house_floor_flat_total_rent[5][4];
    //for buyer scan floor number.....
    int floor;
    //for buyer scan flat number.....
    int flat;
    int bill;

    //identify the Owner and Buyer......
    printf("If you Owner press: 1\n");
    printf("If you Buyer press: 2\n");
    scanf("%d",&identify);

    switch (identify){

        //Details of owner......
        case 1:{
            //enter floor flat information.....
            for(floor=0;floor<5;floor++){
                //floor number.........
                printf("This is floor number:%d\n",floor+1);
                //flat number..........


                for(flat=0;flat<4;flat++){
                    printf("enter rent of flat number:%d\n",flat+1);

                     house_floor_flat_total_rent[floor][flat]=0;
                    //calculate flat bill..........
                    for(bill=0;bill<5;bill++){
                        printf("enter bill%d:",bill+1);
                        scanf("%f",&house_floor_flat_bill[floor][flat][bill]);
                        house_floor_flat_total_rent[floor][flat]= house_floor_flat_total_rent[floor][flat]+house_floor_flat_bill[floor][flat][bill];
                    }
                    printf("total rant of this flat:%f\n",house_floor_flat_total_rent[floor][flat]);
                }
            }
        }

            break;

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
                if(flat==2){
                    printf("Total room:5\n Corridor :3\n Washroom :3\n Total rent :14,000");
                }
                if(flat==3){
                    printf("Total room:4\n Corridor :4\n Washroom :3\n Total rent :14,000");
                }
                if(flat==4){
                    printf("Total room:4\n Corridor :3\n Washroom :2\n Total rent :13,000");
                }

                if(flat>4){
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

