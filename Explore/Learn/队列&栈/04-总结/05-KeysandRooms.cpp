/*
There are N rooms and you start in room 0.  Each room has a distinct number in 0, 1, 2, ..., N-1, and each room may have some keys to access the next room. 

Formally, each room i has a list of keys rooms[i], and each key rooms[i][j] is an integer in [0, 1, ..., N-1] where N = rooms.length.  A key rooms[i][j] = v opens the room with number v.

Initially, all the rooms start locked (except for room 0). 

You can walk back and forth between rooms freely.

Return true if and only if you can enter every room.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int> >& rooms) {
        int room_num = rooms.size();
        vector<int> visited(room_num, false);
        bfs(rooms, 0, visited);
        for (int i = 0; i < visited.size(); i += 1) {
            if (!visited[i]) {
                cout << "no:" << i;
                return false;
            }
        }
        return true;
    }
private:
    void bfs(vector<vector<int> >& rooms, int key, vector<int>& visited) {
        visited[key] = true;
        for (int i = 0; i < rooms[key].size(); i += 1) {
            int new_key = rooms[key][i];
            if (!visited[new_key]) {
                bfs(rooms, new_key, visited);
            }
        }
    }
};