#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct house
{
    int total_room;
    int corridor;
    int washroom;
    int total_rent;
    //house floor-1 flat-4 bill-5.......
    float house_floor_flat_bill[5];
    //for total rent......
    float house_floor_flat_total_rent;

}floor_flat[5][4];

void main()
{
    char buyers_name[20][15];
    //for identity owner or buyer.......
    int identify;
    int floor;
    int flat;
    int bill;

    FILE *outfile;
     // open file for writing........
    outfile=fopen("house.txt","w");
    if(outfile==NULL){
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }


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
                    //scan flat buyer name................
                    printf("enter buyer name :");
                    scanf("%s",buyers_name[flat]);

                    floor_flat[floor][flat].house_floor_flat_total_rent=0;
                    //calculate flat bill..........
                    for(bill=0;bill<5;bill++){
                        printf("enter bill%d:",bill+1);
                        scanf("%f",&floor_flat[floor][flat].house_floor_flat_bill[bill]);
                        floor_flat[floor][flat].house_floor_flat_total_rent=floor_flat[floor][flat].house_floor_flat_total_rent+floor_flat[floor][flat].house_floor_flat_bill[bill];
                    }
                    printf("buyer name:%s\n",buyers_name[flat]);

                    printf("total rant of this flat:%f\n\n",floor_flat[floor][flat].house_floor_flat_total_rent);
                }
            }
        }

            break;

        case 2:{
            struct house floor1_flat1 = {5, 4 , 3, 15000};
            struct house floor1_flat2 = {5, 3 , 3, 14500};
            struct house floor1_flat3= {5, 5 , 4, 17000};
            struct house floor1_flat4 = {5, 4 , 4, 15500};
            struct house floor2_flat1 = {4, 3 , 3, 14000};
            struct house floor2_flat2 = {6, 4 , 4, 19000};
            struct house floor2_flat3 = {6, 4 , 3, 18000};
            struct house floor2_flat4 = {5, 4 , 3, 16000};
            struct house floor3_flat1 = {4, 4 , 3, 14000};
            struct house floor3_flat2 = {5, 3 , 3, 14000};
            struct house floor3_flat3 = {5, 4 , 4, 15000};
            struct house floor3_flat4 = {4, 3 , 3, 13000};
            struct house floor4_flat1 = {6, 5 , 5, 17000};
            struct house floor4_flat2 = {6, 4 , 3, 15000};
            struct house floor4_flat3 = {4, 2 , 2, 13000};
            struct house floor4_flat4 = {4, 4 , 3, 14000};
            struct house floor5_flat1 = {4, 2 , 2, 13000};
            struct house floor5_flat2 = {3, 3 , 3, 12000};
            struct house floor5_flat3 = {3, 2 , 2, 11000};
            struct house floor5_flat4 = {3, 3 , 3, 10000};

            // write struct to file...........................
            fwrite (&floor1_flat1, sizeof(struct house), 1, outfile);
            fwrite (&floor1_flat2, sizeof(struct house), 1, outfile);
            fwrite (&floor1_flat3, sizeof(struct house), 1, outfile);
            fwrite (&floor1_flat4, sizeof(struct house), 1, outfile);
            fwrite (&floor2_flat1, sizeof(struct house), 1, outfile);
            fwrite (&floor2_flat2, sizeof(struct house), 1, outfile);
            fwrite (&floor2_flat3, sizeof(struct house), 1, outfile);
            fwrite (&floor2_flat4, sizeof(struct house), 1, outfile);
            fwrite (&floor3_flat1, sizeof(struct house), 1, outfile);
            fwrite (&floor3_flat2, sizeof(struct house), 1, outfile);
            fwrite (&floor3_flat3, sizeof(struct house), 1, outfile);
            fwrite (&floor3_flat4, sizeof(struct house), 1, outfile);
            fwrite (&floor4_flat1, sizeof(struct house), 1, outfile);
            fwrite (&floor4_flat2, sizeof(struct house), 1, outfile);
            fwrite (&floor4_flat3, sizeof(struct house), 1, outfile);
            fwrite (&floor4_flat4, sizeof(struct house), 1, outfile);
            fwrite (&floor5_flat1, sizeof(struct house), 1, outfile);
            fwrite (&floor5_flat2, sizeof(struct house), 1, outfile);
            fwrite (&floor5_flat3, sizeof(struct house), 1, outfile);
            fwrite (&floor5_flat4, sizeof(struct house), 1, outfile);

            if(fwrite != 0)
                printf("contents to file written successfully !\n");
            else
                printf("error writing file !\n");

            // close file..............
            fclose (outfile);

            //reading from file.........

            FILE *infile;
            struct house floor_flat;

            // Open house.txt for reading
            infile = fopen ("house.txt", "r");
            if (infile == NULL){
                fprintf(stderr, "\nError opening file\n");
                exit (1);
            }
            // read file contents till end of file
            while(fread(&floor_flat, sizeof(struct house), 1, infile))

            printf ("total_room = %d\n corridor = %d\n washroom = %d\n total_rent = %d\n", floor_flat.total_room ,floor_flat.corridor, floor_flat.washroom, floor_flat.total_rent);

            // close file
            fclose (infile);

        }
    }
}
