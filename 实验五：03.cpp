#include <iostream>
using namespace std;
class Cuboid {
public:
    void getValue(int length, int width, int height) {
        m_Length = length;
        m_Width = width;
        m_Height = height;
    }

    int showVolume() {
        return m_Length * m_Width * m_Height;
    }

private:
    int m_Length;
    int m_Width;
    int m_Height;
};
int main()
{
    int l1, l2, l3;
    int w1, w2, w3;
    int h1, h2, h3;

    Cuboid c1;
    Cuboid c2;
    Cuboid c3;

    cout << "输入c1的长，宽，高" << endl;
    cin >> l1 >> w1 >> h1;
    cout << "输入c2的长，宽，高" << endl;
    cin >> l2 >> w2 >> h2;
    cout << "输入c3的长，宽，高" << endl;
    cin >> l3 >> w3 >> h3;

    c1.getValue(l1, w1, h1);
    c2.getValue(l2, w2, h2);
    c3.getValue(l3, w3, h3);

    cout << "c1的体积为： " << c1.showVolume() << " c2的体积为： " << c2.showVolume() << " c3的体积为： " << c3.showVolume() << endl;
    return 0;
}
