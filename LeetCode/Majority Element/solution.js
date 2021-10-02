var majorityElement = (nums) => {
    const hash = {}

    for (const element of nums){
        if (hash[element]) hash[element]++
        else hash[element] = 1
    }

    let half = nums.length / 2

    for (let key in hash){
        if (hash[key] > half) return key
    }     
};