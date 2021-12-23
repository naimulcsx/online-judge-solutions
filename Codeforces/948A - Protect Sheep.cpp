let string = ''
process.stdin.setEncoding('ASCII')
process.stdin.on('data', (data) => string += data)

const main = (input) => {
    let f = input[0].split(' ').map(Number)
    let r = f[0], c = f[1]
    for (let i = 1; i < input.length; ++i) input[i] = input[i].split('')

    for (let i = 1; i <= r; ++i) {
        for (let j = 0; j < c; ++j) {
            if ( input[i][j] == '.' ) input[i][j] = 'D'
            else if (input[i][j] == 'S') {
                let adj = [[i + 1, j],[i - 1, j],[i, j + 1],[i, j - 1]]
    
                for (let i = 0; i < adj.length; ++i) {
                    let el = adj[i];
                    if ( el[0] >= 1 && el[0] <= r && el[1] >= 0 && el[1] < c ) {
                        if ( input[el[0]][el[1]] == 'W' ) {
                            process.stdout.write('No\n')
                            return 0
                        }
                    }
                }
            }
        }
    }

    process.stdout.write('Yes\n')
    for (let i = 1; i <= r; ++i) 
        process.stdout.write( `${input[i].join('')}\n`)
}

process.stdin.on('end', () => main(string.trim().split('\n')))
