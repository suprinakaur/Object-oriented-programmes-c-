#include<iostream.h>
#include<conio.h>
#include<math.h>

float f (float x)
{
	float fx1;
	fx1 = pow(x,3) + pow(x,2) - (3*x) - 3;
	return (fx1);
}

void main()
{
	float x1,x2,x3;
	int count = 0;
	int iter;

	cout <<"Enter x1 = ";
	cin >> x1;
	cout <<"Enter x2 = ";
	cin >> x2;
	cout <<"Enter number of iterations = ";
	cin >> iter;

//	int fx1 = (x1^3) + (x1^2) - (3x1) - 3;
//	int fx2 = (x2^3) + (x2^2) - (3x2) - 3;
	do
	{
		if(count == iter)
		{
			break;
		}

		x3 = (x1 + x2)/2;

		cout <<"x1=" << x1 <<" | x2="<< x2 <<" | x3=" << x3 <<" | " << "  f(x1)=" << f(x1) << " |  f(x2)=" << f(x2) << " |  f(x3)=" << f(x3) << endl << endl;

		//float temp1 = f(x1);
		//float temp2 = f(x3);
		if( f(x1) * f(x3) < 0 )
		{
			x2 = x3;
		}
		else
		{
			x1 = x3;
		}
		count++;
	}
	while ( abs(x1 - x2) < 0.0000001 || f(x3) == 0 );

}
