#include <iostream>
using namespace std;
int main() {
	int x = 0, y = 0, w = 0, h = 0;
	// �� ��ġ (x, y) / �ڽ� �ݴ� �𼭸� (w, h)

	int row_min = 1000, col_min = 1000;
	// ���簢���� ��輱������ �ּҰŸ�
	// ���ι��� row_min / ���� ���� col_min
	cin >> x >> y >> w >> h;

	x > w - x ? row_min = w - x : row_min = x;
	// x�� ���������� 0������ �Ÿ�/ w-x�� w������ �Ÿ� -- ���� �� ���� ���� row_min�� ����

	y > h - y ? col_min = h - y : col_min = y;
	// y�� ���������� 0������ �Ÿ�/ h-y�� h������ �Ÿ� -- ���� �� ���� ���� col_min�� ����

	row_min > col_min ? cout << col_min : cout << row_min;
	// ���������ΰ��� �Ͱ� ���������� ���� �� �� �� ª���� ���
}