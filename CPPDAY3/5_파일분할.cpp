// 5_���Ϻ���
class Car
{
	int speed;
	static int cnt;
public:
	Car(int s) : speed(s) { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};
int Car::cnt = 0;

int main()
{
	Car c;
	std::cout << Car::get_count() << std::endl;
}