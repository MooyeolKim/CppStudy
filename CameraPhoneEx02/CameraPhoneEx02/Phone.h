#include "Camera.h"

class Phone : private Camera
{
public:
	void CallUp(int number);
	void HangUp(void);
	void Photomail(int number);
};