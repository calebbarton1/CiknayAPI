#pragma once
#include <math.h>

template <typename T>
struct  Vector2
{
public:
	//new vector 2
	Vector2(T _x = 0, T _y = 0);

	//new vector 2 from another vector2
	Vector2(const Vector2<T>& other);

	//add a vector, keep original
	Vector2<T> operator + (const Vector2<T>& other) const;
	//add to original vector
	Vector2<T> operator += (const Vector2<T>& other);
	//add number to a copy of vector
	Vector2<T> operator + (T other) const;
	//add number to original vector
	Vector2<T> operator += (T other);

	//minus
	Vector2<T> operator - (const Vector2<T>& other) const;	
	Vector2<T> operator -= (const Vector2<T>& other);
	Vector2<T> operator - (T other) const;
	Vector2<T> operator -= (T other);
	
	//divide
	Vector2<T> operator / (const Vector2<T>& other) const;
	Vector2<T> operator /= (const Vector2<T>& other);
	Vector2<T> operator / (T other) const;
	Vector2<T> operator /= (T other);

	//multiply
	Vector2<T> operator * (const Vector2<T>& other) const;
	Vector2<T> operator *= (const Vector2<T>& other);
	Vector2<T> operator * (T other) const;
	Vector2<T> operator *= (T other);

	//vector equal another
	Vector2<T> operator = (const Vector2<T>& other);
	
	//check if vector equals another
	bool operator == (const Vector2<T>& other) const;
	bool operator != (const Vector2<T>& other) const;

	//distance between the vector and 0,0. Keeps original
	T Magnitude() const;
	T MagnitudeSquared() const;
	//another method
	static T Magnitude(const Vector2<T>& other);
	static T MagnitudeSquared(const Vector2<T>& other);
	//gets distance between two vectors. keeps original
	static T Magnitude(const Vector2<T>& vec1, const Vector2<T>& vec2);
	static T MagnitudeSquared(const Vector2<T>& vec1, const Vector2<T>& vec2);

	//normalise vector
	void Normalise();
	//return a copy of the normalised vector
	Vector2<T> Normalised() const;
	static void Normalise(Vector2<T>& other);
	static Vector2<T> Normalised(const Vector2<T>& other);

	//dot producto of two vectors
	static T Dot(const Vector2<T>& vec1, const Vector2<T>& vec2);
	//cross product (returns z as float)
	static T Cross(const Vector2<T>& vec1, const Vector2<T>& vec2);


public: 
	T x;
	T y;
};

typedef Vector2<int> Vector2i;
typedef Vector2<float> Vector2f;
typedef Vector2<double> Vector2d;

//Constructor for new vector2
template <typename T>
Vector2<T>::Vector2(T _x, T _y) : x(_x), y(_y)
{
}

//constructor from another vector
template <typename T>
Vector2<T>::Vector2(const Vector2<T>& other) : x(other.x), y(other.y)
{
}


template <typename T>
Vector2<T> Vector2<T>::operator + (const Vector2<T>& other) const
{
	return Vector2<T>(x + other.x, y + other.y);
}

template <typename T>
Vector2<T> Vector2<T>::operator += (const Vector2<T>& other)
{
	x += other.x;
	y += other.y;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator + (T other) const
{
	return Vector2<T>(x + other, y + other);
};

template <typename T>
Vector2<T> Vector2<T>::operator += (T other)
{
	x += other;
	y += other;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator - (const Vector2<T>& other) const
{
	return Vector2<T>(x - other.x, y - other.y);
}

template <typename T>
Vector2<T> Vector2<T>::operator -= (const Vector2<T>& other)
{
	x -= other.x;
	y -= other.y;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator - (T other) const
{
	return Vector2<T>(x - other, y - other);
};

template <typename T>
Vector2<T> Vector2<T>::operator -= (T other)
{
	x -= other;
	y -= other;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator / (const Vector2<T>& other) const
{
	return Vector2<T>(x / other.x, y / other.y);
}

template <typename T>
Vector2<T> Vector2<T>::operator /= (const Vector2<T>& other)
{
	x /= other.x;
	y /= other.y;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator / (T other) const
{
	return Vector2<T>(x / other, y / other);
};

template <typename T>
Vector2<T> Vector2<T>::operator /= (T other)
{
	x /= other;
	y /= other;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator * (const Vector2<T>& other) const
{
	return Vector2<T>(x * other.x, y * other.y);
}

template <typename T>
Vector2<T> Vector2<T>::operator *= (const Vector2<T>& other)
{
	x *= other.x;
	y *= other.y;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator * (T other) const
{
	return Vector2<T>(x * other, y * other);
};

template <typename T>
Vector2<T> Vector2<T>::operator *= (T other)
{
	x *= other;
	y *= other;

	return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator = (const Vector2<T>& other)
{
	x = other.x;
	y = other.y;

	return *this;
}


template <typename T>
bool Vector2<T>::operator == (const Vector2<T>& other) const
{
	return (x == other.x && y == other.y);
}

template <typename T>
bool Vector2<T>::operator != (const Vector2<T>& other) const
{
	return (x != other.x || y != other.y);
}

template <typename T>
T Vector2<T>::Magnitude() const
{
	return sqrt(x * x + y * y);
}

template <typename T>
T Vector2<T>::MagnitudeSquared() const
{
	return x * x + y * y;
}

template <typename T>
T Vector2<T>::Magnitude(const Vector2<T>& other)
{
	return sqrt(other.x * other.x + other.y * other.y);
}

template <typename T>
T Vector2<T>::MagnitudeSquared(const Vector2<T>& other)
{
	return other.x * other.x + other.y * other.y;
}

template <typename T>
T Vector2<T>::Magnitude(const Vector2<T>& vec1, const Vector2<T>& vec2)
{
	Vector2<T> temp = vec2 - vec1;
	float mag = Magnitude(temp);
	return mag;
}

template <typename T>
T Vector2<T>::MagnitudeSquared(const Vector2<T>& vec1, const Vector2<T>& vec2)
{
	Vector2<T> temp = vec2 - vec1;
	float sqrmag = MagnitudeSquared(temp);
	return sqrmag;
}

template <typename T>
void Vector2<T>::Normalise()
{
	float mag = Magnitude();

	if (mag > 0)
	{
		x = x / mag;
		y = y / mag;
	}
}

template <typename T>
Vector2<T> Vector2<T>::Normalised() const
{
	float mag = Magnitude();
	Vector2<T> temp;

	if (mag > 0)
	{
		temp.x = x / mag;
		temp.y = y / mag;
	}

	return temp;
}

template <typename T>
void Vector2<T>::Normalise(Vector2<T>& other)
{
	float mag = other.Magnitude();

	if (mag > 0)
	{
		other.x = other.x / mag;
		other.y = other.y / mag;
	}
}

template <typename T>
Vector2<T> Vector2<T>::Normalised(const Vector2<T>& other)
{
	float mag = other.Magnitude();
	Vector2<T> temp;

	if (mag > 0)
	{
		temp.x = other.x / mag;
		temp.y = other.y / mag;
	}

	return temp;
}

template <typename T>
T Vector2<T>::Dot(const Vector2<T>& vec1, const Vector2<T>& vec2)
{
	return (vec1.x * vec2.x) + (vec1.y * vec2.y);
}

template <typename T>
T Vector2<T>::Cross(const Vector2<T>& vec1, const Vector2<T>& vec2)
{
	return (vec1.x * vec2.y) - (vec2.x * vec1.y);
}
