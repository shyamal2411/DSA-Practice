package javaP;

import java.util.*;
import javax.swing.*;


public class numberGuessingGame {
    public static void main(String[] args) {
        int guessNumber = (int) (Math.random()*100 + 1);
        int inputAnswer = 0;
        System.out.println("The correct guess would be " + guessNumber);
        int count = 1;

        while (inputAnswer != guessNumber)
        {
            String response = JOptionPane.showInputDialog(null, "Enter a guess between 1 and 100", "Guessing Game", 3);
            inputAnswer = Integer.parseInt(response);
            JOptionPane.showMessageDialog(null,""+ determineGuess(inputAnswer, guessNumber, count));
            count++;
        }  
    }

    public static String determineGuess(int inputAnswer, int guessNumber, int count){
        if (inputAnswer <=0 || inputAnswer >100) {
            return "Your guess is invalid";
        }
        else if (inputAnswer == guessNumber ){
            return "Correct!\nTotal Guesses: " + count;
        }
        else if (inputAnswer > guessNumber) {
            return "Your guess is too high, try again.\nTry Number: " + count;
        }
        else if (inputAnswer < guessNumber) {
            return "Your guess is too low, try again.\nTry Number: " + count;
        }
        else {
            return "Your guess is incorrect\nTry Number: " + count;
        }
    }
}