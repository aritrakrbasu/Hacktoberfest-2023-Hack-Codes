function likes(names) {

    const templates = [
        'no one likes this',
        '{name} likes this',
        '{name} and {name} like this',
        '{name}, {name} and {name} like this',
        '{name}, {name} and {n} others like this'
    ];

    const i = Math.min(names.length, 4);

    return templates[i].replace(/{name}|{n}/g, (val) => {
        return val === '{name}' ? names.shift() : names.length;
    });
}