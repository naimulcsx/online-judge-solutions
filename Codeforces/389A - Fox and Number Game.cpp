let string = ''
process.stdin.setEncoding('ASCII')
process.stdin.on('data', (data) => string += data)

const gcd = (a, b) => {
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

const main = (input) => {
    let n = Number(input[0]);
    let list = input[1].split(' ').map(Number), ans = list[0];
    for (let i = 1; i < list.length; ++i) ans = gcd(ans, list[i]);
    console.log( ans * n );
}

process.stdin.on('end', () => main(string.trim().split('\n')))
