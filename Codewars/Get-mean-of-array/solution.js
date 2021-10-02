// Author: Rachel aka greenchul (greensand on CodeWars)
// Question link: https://www.codewars.com/kata/563e320cee5dddcf77000158/train/javascript

function getAverage(marks){
    // Find the total by adding all the numbers together in the array
    let total = marks.reduce((a, b) => a + b, 0)
    // Find the length of the array
    let len = marks.length
    // Divide the total by the length to find average
    //Math.floor will round the number down to nearest interger
    //return result
    return Math.floor(total / len);
    
  }
  