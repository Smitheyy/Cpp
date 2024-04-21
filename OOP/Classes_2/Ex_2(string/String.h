class String
{
	static const int max_length = 255;
	char text[max_length + 1];

public:
	String();
	String(const char* str);

	int LengthOfString();
	String CutString(int beggining, int length);
	String FoldingString(String second);
	void DisplayString();
};

