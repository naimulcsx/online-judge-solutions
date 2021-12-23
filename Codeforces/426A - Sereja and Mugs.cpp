process.stdin.setEncoding('ASCII');
let string = '';
process.stdin.on('data', (data) => string += data);

const main = (input) => {
    const ns = input[0].split(' ').map(Number);
    const vol = input[1].split(' ').map(Number);

    let sum = 0, mx = 0;

    vol.forEach( (val) => {
        sum += val;
        mx = Math.max(mx, val);
    });

    if ((sum - mx) <= ns[1]) console.log("YES");
    else console.log("NO");
};

process.stdin.on('end', () => main( string.trim().split('\n') ));
