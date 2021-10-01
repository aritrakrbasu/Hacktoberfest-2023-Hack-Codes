// Author: Rachel aka greenchul (greensand on CodeWars) 
// Question link: https://www.codewars.com/kata/51675d17e0c1bed195000001

function solution(digits){
    var answer = 0
      //loop through digits saving a variable of next five numbers
      // compare with answer
      // if bigger replace answer
      // returns largest set of 5 digits
      for (let i = 0; i < digits.length; i++) {
        let five = parseInt(digits.substr(i, 5))
        if (five > answer) {
          answer = five
        }
      }
      
      return answer
    }