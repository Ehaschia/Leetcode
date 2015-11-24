package com.company;

/**
 * Created by Dell on 2015/11/23.
 */
public class solution {
    public boolean canWinNim( int n){
        if (n<4){
            return true;
        }
        else if(n%4 == 0) {
            return false;
        }else{
            return true;
        }

    }
}
