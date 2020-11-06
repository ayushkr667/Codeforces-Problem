/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site: codeforces               |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define INF (ll) 1e18
const double PI = 3.141592653589793238460;
int n, m, t;
int main() {
	vector<double> angles;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		double angle = atan2(y, x);
		angle = angle * 180 / acos(-1);
		if (angle < 0)
			angle += 360;
		angles.push_back(angle);
	}

	double maxAngle = 0;
	sort(angles.begin(), angles.end());

	for (int i = 0; i < n - 1; i++)
		maxAngle = max(maxAngle, angles[i + 1] - angles[i]);

	maxAngle = max(maxAngle, angles.front() + 360 - angles.back());

	printf("%.15f\n", 360 - maxAngle);
}