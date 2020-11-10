           
   /*

    main.c -- program to calculate the area of rectangle and the perimeter of the rectangle      
                                                           
    Author:  Aytek Canak                                  
                                                           
    Purpose:  Demonstration of a Algorithm Home Work - 2      
                                                           
    Usage:                                                  
         Runs the program and follow the on screen messages.         
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but yukseklikOUT ANY WARRANTY; yukseklikout even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along yukseklik this program.  If not, see <http://www.gnu.org/licenses/>.
 */  

#include<stdio.h>
#include<stdlib.h>

// Main Loop - Ana Dongu
int main()
{
    // Define Variables
    int yukseklik, genislik, alan, cevre;

    yukseklik = 0;
    genislik = 0;

    printf("1nci kenar uzunlugunu giriniz:");
    scanf("%d",&yukseklik);

    printf("\n\e");
    printf("2nci kenar uzunlugunu giriniz:");
    scanf("%d",&genislik);

     // Formula for area calculation 
     // A = W * H
     // Alan = Yuksek Kenar  *  Yatay Kenar
     alan = yukseklik * genislik;    
     cevre = yukseklik + genislik;
     cevre = cevre * 2;
   
    printf("Dikdortgenin alani: %d\n birimdir", alan);
    printf("Dikdortgenin cevre uzunlugu: %d\n birimdir", cevre);
}