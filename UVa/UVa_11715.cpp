#include <bits/stdc++.h>
using namespace std;

int main() {
    int op, c = 1;
    
    while(1) {
        double u, v, t, s, a;
        cin >> op;
        if ( op == 0 ) break;

        cout << "Case " << c << ": ";
        cout << showpoint << fixed << setprecision(3);

        switch( op ) {
            case 1:
                cin >> u >> v >> t;
                a = ((v - u) / t);
                s = (u * t + 0.5 * a * t * t);

                cout << s << " " << a << endl;
                break;

            case 2:
                cin >> u >> v >> a;
                s = (v*v - u*u) / (2.0 * a);
                t = (v - u) / a;

                cout << s << " " << t << endl;
                break;

            case 3:
                cin >> u >> a >> s;
                v = sqrt(u * u + 2 * a * s);
                t = (v-u) / a;

                cout << v << " " << t << endl;
                break;
            case 4:
                cin >> v >> a >> s;
                u = sqrt(v * v - 2 * a * s);
                t = (v - u) / a ;

                cout << u << " " << t << endl;
                break;
        }

        c++;
    }

    return 0;
}
