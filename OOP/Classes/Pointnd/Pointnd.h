class Pointnd{
private:
	int dimensions;
	int* coordinates;

public:
	static int count;

	Pointnd(int dims);
	~Pointnd();

	Pointnd Addpoints(Pointnd p);
	friend Pointnd Addpointsg(Pointnd p1, Pointnd p2);
};



