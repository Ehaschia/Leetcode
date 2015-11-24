package com.company;

import java.util.*;
public class Main {
    public static void main(String[] args){
        solution solu = new solution();
        Scanner In = new Scanner(System.in);
        System.out.print("请输入N:");
            int n = In.nextInt();
        System.out.print(solu.canWinNim(n));
    }

}
