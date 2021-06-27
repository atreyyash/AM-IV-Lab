#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n"
#define vi vector<int>
#define vf vector<float>
#define pii pair<int,int>
#define pb push_back
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define countsetb(n) __builtin_popcount(n)
#define inputarr(arr,n) for(int i=0;i<n;i++) cin>>arr[i]
#define logarr(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" "

void getCofactor(int mat[100][100], int temp[100][100], int p, int q, int n) {
	int i = 0, j = 0;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (row != p && col != q) {
				temp[i][j++] = mat[row][col];
				if (j == n - 1) {
					j = 0;
					i++;
				}
			}
		}
	}
}

int determinant(int mat[100][100], int n) {
	int D = 0;
	if (n == 1)
		return mat[0][0];
	int temp[100][100];
	int sign = 1;
	for (int f = 0; f < n; f++) {
		getCofactor(mat, temp, 0, f, n);
		D += sign * mat[0][f] * determinant(temp, n - 1);
		sign = -sign;
	}
	return D;
}

void adjoint(int A[100][100], int adj[100][100], int N) {
	if (N == 1) {
		adj[0][0] = 1;
		return;
	}
	int sign = 1, temp[100][100];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			getCofactor(A, temp, i, j, N);
			sign = ((i + j) % 2 == 0) ? 1 : -1;
			adj[j][i] = (sign) * (determinant(temp, N - 1));
		}
	}
}

bool inverse(int A[100][100], float inverse[100][100], int N) {
	int det = determinant(A, N);
	if (det == 0) {
		cout << "Singular matrix, can't find its inverse";
		return false;
	}
	int adj[100][100];
	adjoint(A, adj, N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			inverse[i][j] = adj[i][j] / float(det);

	return true;
}

template<typename T>
void display(T A[100][100], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    cout<<"\tExperiment-10"<<endl;
    cout<<"\tMade By : Yash Atrey"<<endl;
    cout<<"\tRoll No. : 109-CSEA-19"<<endl;
	cout<<"Date : 15-06-21"<<endl;
	cout << "\nProgram to find inverse of a matrix ";

	int N;
	cout << "Enter the size of matrix: ";
	cin >> N;

	int arr[100][100];
	int adj[100][100];
	float inv[100][100];

	cout << "Enter the elements of matrix";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	cout << "\nThe Adjoint is :\n";
	adjoint(arr, adj, N);
	display(adj, N);

	cout << "\nThe Inverse is :\n";
	if (inverse(arr, inv, N))
		display(inv, N);

	return 0;
}
