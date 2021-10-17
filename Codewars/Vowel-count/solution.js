// Author: Rachel aka greenchul (greensand on CodeWars)
// Question link: https://www.codewars.com/kata/54ff3102c1bad923760001f3/solutions/javascript

function getCount(str) {
    //start vowel count off at 0
    var vowelsCount = 0;
    
    //split string in to array
    let arr = str.split("");
    //loop through each letter in array, adding 1 to vowel count if letter is equal
    // to a,e,i,o,u.
    arr.forEach(function(letter){
      if(letter === "a" || letter === "e" || letter === "i" || letter === "o" || letter === "u"){
        vowelsCount++
      }
    })
    // return vowel count
    return vowelsCount;
  }