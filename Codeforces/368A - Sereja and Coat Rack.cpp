process.stdin.setEncoding('ASCII');

let string = '';
process.stdin.on('data', (data) => string += data);

process.stdin.on('end', () => {
    const array = string.trim().split('\n');
    const line = array[0].split(' ').map(Number);

    let n = line[0], d = line[1];
    let cost = array[1].split(' ').map(Number);
    let visitors = Number(array[2]);

    cost.sort((a, b) => a - b);
    
    let profit = 0;
    for (let i = 0; i < cost.length; ++i) {
        if (visitors == 0) break;
        profit += cost[i];
        visitors--;
    }

    profit -= (visitors * d);
    console.log(profit);
});
