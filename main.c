//
//  main.c
//  cây atm
//
//  Created by Hiếu Hee on 14/06/2022.
//

#include <stdio.h>

int main()
{
    int pin;
    int cardid;
    int nhapso;
    printf("nhap ma pin cua ban\n");
    scanf("%d", &pin);
    printf("nhap cardid cua ban\n");
    scanf("%d", &cardid);
    if(pin==14092001 && cardid==2001){
        printf("dang nhap thanh cong\n");
        printf("nhap so\n");
        scanf("%d", &nhapso);
        if(nhapso==1)
        printf("moi ban rut tien\n");
        else if(nhapso==2)
            printf("nhap so tien chuyen khoan\n");
        else if(nhapso==3)
        printf("so du cua ban la\n");
        else if(nhapso==4)
            printf("\tro ve menu\n");}
    else
        printf("sai mat khau\n");
        
    
        
    return 0;
}

