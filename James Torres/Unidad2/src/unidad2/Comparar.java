/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package unidad2;

import java.util.Arrays;
import static java.util.Arrays.sort;
import java.lang.Math;

public class Comparar {

    public static void main(String[] args) {
                //se crea la lista1 con un tamaño de 10
        Integer lista1[] = new Integer[10];
        //se crea la lista2 con un tamaño de 100
        Integer lista2[] = new Integer[100];
        //se crea la lista3 con un tamaño de 1000
        Integer lista3[] = new Integer[1000];
        //se crea la lista4 con un tamaño de 10000
        Integer lista4[] = new Integer[10000];
        //se crea la lista5 con un tamaño de 100000
        Integer lista5[] = new Integer[100000];
        //se crea la lista6 con un tamaño de 1000000
        Integer lista6[] = new Integer[1000000];
        //se crea la lista7 con un tamaño de 10000000
        Integer lista7[] = new Integer[10000000];
        
        //se crea el ciclo for para llenar cada lista con números aleatorios
        for (int i = 0; i < lista1.length; i++) {
            int numAleatorio = (int) (Math.random() * 200001) - 100000;
            lista1[i] = numAleatorio;
        }
        for (int i = 0; i < lista2.length; i++) {
            int numAleatorio = (int) (Math.random() * 200001) - 100000;
            lista2[i] = numAleatorio;
        }
        for (int i = 0; i < lista3.length; i++) {
            int numAleatorio = (int) (Math.random() * 200001) - 100000;
            lista3[i] = numAleatorio;
        }
        for (int i = 0; i < lista4.length; i++) {
            int numAleatorio = (int) (Math.random() * 200001) - 100000;
            lista4[i] = numAleatorio;
        }
        for (int i = 0; i < lista5.length; i++) {
            int numAleatorio = (int) (Math.random() * 200001) - 100000;
            lista5[i] = numAleatorio;
        }
        for (int i = 0; i < lista6.length; i++) {
            int numAleatorio = (int) (Math.random() * 200001) - 100000;
            lista6[i] = numAleatorio;
        }
        for (int i = 0; i < lista7.length; i++) {
            int numAleatorio = (int) (Math.random() * 200001) - 100000;
            lista7[i] = numAleatorio;
        }
        
        long startTime;
        long endTime;
        long timeSecuencial;
        long timeParalelo;
        long eficiencia;

        //Se crea un array para cada dato guardarlo
        long[] aElementos = new long[7];
        long[] aTiempoSecuencial = new long[7];
        long[] aTiempoParalelo = new long[7];
        double [] aEficiencia = new double[7];

        //Se crean dos objetos de las clases de los algoritmos
        MergeSortForkJoin mergeSortForkJoin = new MergeSortForkJoin();
       // MergeSort mergeSort = new MergeSort(); //No es necesaria ya que el metodo es static. 

        //Se agregan los tiempos a los array
        //Lista 1
        startTime = System.nanoTime();
        sort(lista1);
        endTime = System.nanoTime();
        timeSecuencial = endTime - startTime;
        startTime = System.nanoTime();
        mergeSortForkJoin.sort(lista1);
        endTime = System.nanoTime();
        timeParalelo = endTime - startTime;
        eficiencia = (timeSecuencial * 100 / timeParalelo);
        aElementos[0] = 8;
        aTiempoSecuencial[0] = timeSecuencial;
        aTiempoParalelo[0] = timeParalelo;
        aEficiencia[0] = eficiencia;

        //Lista 2
        startTime = System.nanoTime();
        sort(lista2);
        endTime = System.nanoTime();
        timeSecuencial = endTime - startTime;
        startTime = System.nanoTime();
        mergeSortForkJoin.sort(lista2);
        endTime = System.nanoTime();
        timeParalelo = endTime - startTime;
        eficiencia = (timeSecuencial * 100 / timeParalelo);
        aElementos[1] = 12;
        aTiempoSecuencial[1] = timeSecuencial;
        aTiempoParalelo[1] = timeParalelo;
        aEficiencia[1] = eficiencia;

        //Lista 3
        startTime = System.nanoTime();
        sort(lista3);
        endTime = System.nanoTime();
        timeSecuencial = endTime - startTime;
        startTime = System.nanoTime();
        mergeSortForkJoin.sort(lista3);
        endTime = System.nanoTime();
        timeParalelo = endTime - startTime;
        eficiencia = (timeSecuencial * 100 / timeParalelo);
        aElementos[2] = 16;
        aTiempoSecuencial[2] = timeSecuencial;
        aTiempoParalelo[2] = timeParalelo;
        aEficiencia[2] = eficiencia;

        //Lista 4
        startTime = System.nanoTime();
        sort(lista4);
        endTime = System.nanoTime();
        timeSecuencial = endTime - startTime;
        startTime = System.nanoTime();
        mergeSortForkJoin.sort(lista4);
        endTime = System.nanoTime();
        timeParalelo = endTime - startTime;
        eficiencia = (timeSecuencial * 100 / timeParalelo);
        aElementos[3] = 20;
        aTiempoSecuencial[3] = timeSecuencial;
        aTiempoParalelo[3] = timeParalelo;
        aEficiencia[3] = eficiencia;

        //Lista 5
        startTime = System.nanoTime();
        sort(lista5);
        endTime = System.nanoTime();
        timeSecuencial = endTime - startTime;
        startTime = System.nanoTime();
        mergeSortForkJoin.sort(lista5);
        endTime = System.nanoTime();
        timeParalelo = endTime - startTime;
        eficiencia = (timeSecuencial * 100 / timeParalelo);
        aElementos[4] = 25;
        aTiempoSecuencial[4] = timeSecuencial;
        aTiempoParalelo[4] = timeParalelo;
        aEficiencia[4] = eficiencia;

        //Lista 6
        startTime = System.nanoTime();
        sort(lista6);
        endTime = System.nanoTime();
        timeSecuencial = endTime - startTime;
        startTime = System.nanoTime();
        mergeSortForkJoin.sort(lista6);
        endTime = System.nanoTime();
        timeParalelo = endTime - startTime;
        eficiencia = (timeSecuencial * 100 / timeParalelo);
        aElementos[5] = 30;
        aTiempoSecuencial[5] = timeSecuencial;
        aTiempoParalelo[5] = timeParalelo;
        aEficiencia[5] = eficiencia;

        //Lista 7
        startTime = System.nanoTime();
        sort(lista7);
        endTime = System.nanoTime();
        timeSecuencial = endTime - startTime;
        startTime = System.nanoTime();
        mergeSortForkJoin.sort(lista7);
        endTime = System.nanoTime();
        timeParalelo = endTime - startTime;
        eficiencia = (timeSecuencial * 100 / timeParalelo);
        aElementos[6] = 40;
        aTiempoSecuencial[6] = timeSecuencial;
        aTiempoParalelo[6] = timeParalelo;
        aEficiencia[6] = eficiencia;

        //Se imprime la tabla
        System.out.println("Elementos  |  Tiempo Secuencial  |  Tiempo Paralelo  |  Eficiencia %");
        for (int i = 0; i < 7; i++) {
            System.out.println(aElementos[i] + "  |  " + aTiempoSecuencial[i] + "  |  " + aTiempoParalelo[i] + "  |  " + aEficiencia[i]);
        }
    }
}
