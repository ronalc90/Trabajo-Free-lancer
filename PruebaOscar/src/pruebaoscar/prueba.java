/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pruebaoscar;

import java.util.Scanner;

public class prueba {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite tamaño de la matriz: ");
        int size = scanner.nextInt();

        char matriz[][] = new char[size][size];

        // Llenar la matriz
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == 0 && j == 0) {
                    matriz[i][j] = (char) (size + 'A' - 1);
                } else if (i == 0) {
                    matriz[i][j] = (char) (matriz[i][j - 1] - 1);
                } else {
                    matriz[i][j] = matriz[0][j];
                }
                if (i + j == size - 1) {
                    break;
                }
            }
        }

        boolean top1=false;
        boolean top2=false;
        for (int i = 1; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i + j >size-1) {
                    matriz[i][j]=  (char)(size + 'A'+(j*-1)+size-1);
                }
            }
        }

        // Imprimir la matriz
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(matriz[i][j] + " ");
            }
            System.out.println();
        }
    }

}
