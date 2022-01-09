#include<iostream>
#include<vector>
#include<algorithm>
#include<cassert>
#include<cstring>
using namespace std;
typedef pair<int, int> pi;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n, m, a[10][10];
vector<pi> v;
bool vis[10][10];
void dfs(int x, int y) {
    if (a[x][y] == 1 || vis[x][y]) return;
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        if (x + dx[i] < 0 || y + dy[i] < 0 || x + dx[i] >= n || y + dy[i] >= m) {
            continue;
        }
        dfs(x + dx[i], y + dy[i]);
    }
}

int solve() {
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 2) dfs(i, j);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && a[i][j] == 0) ans++;
        }
    }
    return ans;
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (!a[i][j]) v.push_back(pi(i, j));
        }
    }
    assert(v.size() >= 3);
    int ans = 0;
    for (int i = 0; i < (int)v.size(); i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 1;
                ans = max(ans, solve());
                a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 0;
            }
        }
    }
    cout << ans;
}

// ---------------------------------------------------------------------------------------------------------------------

/* 
// bfs
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
const int MAX = 8;
typedef struct{
    int y, x;
}Dir;
Dir moveDir[4] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
int N, M;
int lab[MAX][MAX];
int temp[MAX][MAX];
int result;

void BFS(void){
    int afterSpread[MAX][MAX];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            afterSpread[i][j] = temp[i][j];
    queue<pair<int, int>> q; //y, x
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (afterSpread[i][j] == 2) //바이러스라면
                q.push(make_pair(i, j)); //큐에 넣는다
    while (!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            int nextY = y + moveDir[i].y;
            int nextX = x + moveDir[i].x;
            if (0 <= nextY && nextY < N && 0 <= nextX && nextX < M) //범위 내
                if (afterSpread[nextY][nextX] == 0){ //빈칸이라면
                    afterSpread[nextY][nextX] = 2; //바이러스 감염
                    q.push(make_pair(nextY, nextX));
                }
        }
    }
    int empty = 0;
    //빈칸 세기
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (afterSpread[i][j] == 0)
                empty++;
    result = max(result, empty);
}
void makeWall(int cnt){
    if (cnt == 3){ //벽을 세개 만들었으므로
        BFS();
        return;
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (temp[i][j] == 0) {
                temp[i][j] = 1; //마찬가지로 해당칸에 새우고
                makeWall(cnt + 1);
                temp[i][j] = 0; //다시 허문다
            }
}
int main(void){
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> lab[i][j];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (lab[i][j] == 0){ //빈칸 발견 시
                //연구실 상태를 복사한다
                for (int k = 0; k < N; k++)
                    for (int l = 0; l < M; l++)
                        temp[k][l] = lab[k][l];
                temp[i][j] = 1; //해당 칸에 벽을 세운다
                makeWall(1); //벽을 세운 상태이므로 cnt = 1
                temp[i][j] = 0; //다시 허문다
            }
    cout << result << endl;
    return 0;
}
*/

// ---------------------------------------------------------------------------------------------------------------------


/*
// dfs
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int N,M,ans;
int board[8][8], copied[8][8];
bool checked[8][8];
const int dy[4]={-1,1,0,0};
const int dx[4]={0,0,-1,1};

struct Point{
    int y,x;
    Point(int y, int x):y(y),x(x){}
};

vector<Point> virus;

// 안전지역 카운트
int cntZero(){
    int ret=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            if(copied[i][j]==0)
                ++ret;
    return ret;
}

// 좌표 유효성 검사
bool isValid(int y, int x){
    return y>=0 && x>=0 && y<N && x<M && copied[y][x]==0;
}

// DFS 탐색
void virusDFS(int y, int x){
    checked[y][x]=true;
    copied[y][x]=2;
    for(int i=0;i<4;i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(isValid(ny,nx) && !checked[ny][nx])
            virusDFS(ny,nx);
    }
}

// 벽 세우기 백트래킹
void setWall(int n){
    // 벽 3개를 모두 세우면 전파 시작 및 최댓값 갱신
    if(n==3){
        memset(checked,false,sizeof(checked));

        for(int i=0;i<N;i++)
            for(int j=0;j<M;j++)
                copied[i][j]=board[i][j];

        for(Point p:virus)
            virusDFS(p.y,p.x);

        ans = max(ans, cntZero());

        return;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(board[i][j]==0){
                board[i][j]=1;
                setWall(n+1);
                board[i][j]=0;
            }
        }
    }
}

int main(){
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>board[i][j];
            if(board[i][j]==2)
                virus.push_back(Point(i,j));
        }
    }

    setWall(0);

    cout<<ans;

    return 0;
}



// ---------------------------------------------------------------------------------------------------------------------



// bfs

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int N,M,ans;
int board[8][8], copied[8][8];
bool checked[8][8];
const int dy[4]={-1,1,0,0};
const int dx[4]={0,0,-1,1};

struct Point{
    int y,x;
    Point(int y, int x):y(y),x(x){}
};

vector<Point> virus;

// 안전지역 카운트
int cntZero(){
    int ret=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            if(copied[i][j]==0)
                ++ret;
    return ret;
}

// 좌표 유효성 검사
bool isValid(int y, int x){
    return y>=0 && x>=0 && y<N && x<M && copied[y][x]==0;
}

// BFS 탐색
void virusBFS(){
    memset(checked,false,sizeof(checked));

    queue<Point> q;
    for(Point p:virus){
        checked[p.y][p.x]=true;
        q.push(Point(p.y,p.x));
    }

    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            copied[i][j]=board[i][j];

    while(!q.empty()){
        Point cur = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int ny = cur.y+dy[i];
            int nx = cur.x+dx[i];
            if(isValid(ny,nx) && !checked[ny][nx]){
                copied[ny][nx]=2;
                checked[ny][nx]=true;
                q.push(Point(ny,nx));
            }
        }
    }
}

// 벽 세우기 백트래킹
void setWall(int n){
    // 3개를 모두 세우면 전파 시작 및 최댓값 갱신
    if(n==3){
        virusBFS();
        ans = max(ans, cntZero());
        return;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(board[i][j]==0){
                board[i][j]=1;
                setWall(n+1);
                board[i][j]=0;
            }
        }
    }
}

int main(){
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>board[i][j];
            if(board[i][j]==2)
                virus.push_back(Point(i,j));
        }
    }

    setWall(0);

    cout<<ans;

    return 0;
}
*/