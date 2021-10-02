String.prototype.toJadenCase = function () {
  
  const words = this.split(" ");
  
  const UpperCased = words.map((word)=>{
    return `${word.charAt(0).toUpperCase()}${word.slice(1)}`
   });
  
  const JadenCased = UpperCased.join(" ");
  
  return JadenCased;
};
