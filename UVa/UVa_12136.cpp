#include <bits/stdc++.h>
using namespace std;

struct time {int sm, fm, fh, sh;};
struct timestamp {int start, end;};

bool is_ovelapped(struct time, struct time);

int main() {
    int n, c = 1;
    cin >> n;
    
    while(n--) {
        struct time wife, meeting;
        scanf("%d:%d %d:%d", &wife.sh , &wife.sm , &wife.fh, &wife.fm);
        scanf("%d:%d %d:%d", &meeting.sh , &meeting.sm , &meeting.fh, &meeting.fm);

        cout << "Case " << c << ": "; 

        if ( is_ovelapped(wife, meeting) ) 
            cout << "Mrs Meeting" << endl;
        else
            cout << "Hits Meeting" << endl;

        c++;
    }    

    return 0;
}

bool is_ovelapped(struct time wife, struct time meeting) {
    timestamp w, m;
    w.start = wife.sh * 60 * 60 + wife.sm * 60;
    w.end = wife.fh * 60 * 60 + wife.fm * 60;

    m.start = meeting.sh * 60 * 60 + meeting.sm * 60;
    m.end = meeting.fh * 60 * 60 + meeting.fm * 60;

    if ( m.start >= w.start && m.start <= w.end )
        return true;

    else if ( m.end >= w.start && m.end <= w.end ) 
        return true;

    else if ( w.start >= m.start && w.start <= m.end )
        return true;

    else if ( w.end >= m.start && w.end <= m.end )
        return true;

    return false;
}
