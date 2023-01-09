/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package clase0;

import java.util.Scanner;


public class Matrixwhile {

    public static void main(String[] args) {

        Scanner teclado = new Scanner(System.in);

        int i;
        int j;
        int num_may, pos_may_i, pos_may_j;
        int num_men, pos_men_i, pos_men_j;
        int matriz[][] = new int[3][3];

        i = 0;

        while (i < 3) {

            j = 0;

            while (j < 3) {

                System.out.println("Introduce el dato" + i + "," + j + ":");
                matriz[i][j] = teclado.nextInt();
                j++;

            }
            i++;
        }

        //Impresion Matriz
        System.out.println("La Matriz es:");
        i = 0;
        while (i < 3) {
            j = 0;
            while (j < 3) {
                System.out.print(matriz[i][j] + " ");
                j++;
            }
            i++;
            System.out.println();
        }

        //Mayor y Menor
        num_may = num_men = matriz[0][0];
        pos_may_i = pos_may_j = pos_men_i = pos_men_j = 0;

        i = 0;
        while (i < 3) {
            j = 0;
            while (j < 3) {
                if (matriz[i][j] > num_may) {
                    num_may = matriz[i][j];
                    pos_may_i = i;
                    pos_may_j = j;
                } else if (matriz[i][j] < num_men) {
                    num_men = matriz[i][j];
                    pos_men_i = i;
                    pos_men_j = j;
                }
                j++;

            }
            i++;

        }

        System.out.print("Dato mayor: " + num_may);
        System.out.println(" Fila: " + pos_may_i + " Columna: " + pos_may_j);
        System.out.print("Dato menor: " + num_men);
        System.out.println(" Fila: " + pos_men_i + " Columna: " + pos_men_j);

    }

}
