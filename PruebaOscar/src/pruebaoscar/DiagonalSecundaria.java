/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pruebaoscar;

/**
 *
 * @author Ronald
 */
public class DiagonalSecundaria {

    public static void main(String[] args) {

        char[][] matriz = new char[5][5];

        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[i].length; j++) {
                if (i + j == 4) {
                    matriz[i][j] = 'X';
                } else if (i + j > 4) {
                    matriz[i][j] = 'K';
                } else {
                    matriz[i][j] = '-';
                }
            }
        }
        
        //imprimir la matriz
        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[i].length; j++) {
                System.out.print(matriz[i][j] + " ");
            }
            System.out.println();
        }
    }
}
