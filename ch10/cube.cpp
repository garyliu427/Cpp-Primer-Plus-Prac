#include <iostream>

class Cube {
public:
	// 设置长
	void setL(int l) {
		m_L = l;
	}
	// 获取长
	int getL() {
		return m_L;
	}
	// 设置宽
	void setW(int w) {
		m_W = w;
	}
	// 获取宽
	int getW() {
		return m_W;
	}
	// 设置高
	void setH(int h) {
		m_H = h;
	}
	// 获取高
	int getH() {
		return m_H;
	}
	// 获取立方体的体积
	int calculateS() {
		return 2 * m_L * m_W + 2 * m_W + m_H + 2 * m_L * m_H;
	}
	// 获取立方体的面积
	int calculateV() {
		return m_L * m_W * m_H;
	}

private:
	int m_L; // 长
	int m_W; // 宽
	int m_H; // 高
};

// 利用全局函数判断 两个立方体是否相等
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}

auto main() -> int {
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);

	std::cout << "c1 面积: " << c1.calculateS() << std::endl;
	std::cout << "c1 体积: " << c1.calculateV() << std::endl;

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);

	bool ret = isSame(c1, c2);
	if (ret) {
		std::cout << "Same" << std::endl;
	}
	return 0;
}