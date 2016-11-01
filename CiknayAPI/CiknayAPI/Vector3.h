#pragma once
#include <math.h>

template <typename T>
struct  Vector3
{
public:
	//new vector 2
	Vector3(T _x = 0, T _y = 0, T _z = 0);

	//new vector 2 from another Vector3
	Vector3(const Vector3<T>& other);

	//add a vector, keep original
	Vector3<T> operator + (const Vector3<T>& other) const;
	//add to oiginal vector
	Vector3<T> operator += (const Vector3<T>& other);
	//add numbr to a copy of vector
	Vector3<T> operator + (T other) const;
	//add numbr to original vector
	Vector3<T> operator += (T other);

	//minus
	Vector3<T> operator - (const Vector3<T>& other) const;
	Vector3<T> operator -= (const Vector3<T>& other);
	Vector3<T> operator - (T other) const;
	Vector3<T> operator -= (T other);

	//divide
	Vector3<T> operator / (const Vector3<T>& other) const;
	Vector3<T> operator /= (const Vector3<T>& other);
	Vector3<T> operator / (T other) const;
	Vector3<T> operator /= (T other);

	//multiply
	Vector3<T> operator * (const Vector3<T>& other) const;
	Vector3<T> operator *= (const Vector3<T>& other);
	Vector3<T> operator * (T other) const;
	Vector3<T> operator *= (T other);


	//dot product of other. Copies the vectors and normalises them, then calculates dot.
	float operator | (const Vector3<T>& other) const;
	//cross product. returns another vector3 position
	Vector3<T> operator ^ (const Vector3<T>& other) const;

	//vector equal another
	Vector3<T> operator = (const Vector3<T>& other);

	//check if vector equals another
	bool operator == (const Vector3<T>& other) const;
	bool operator != (const Vector3<T>& other) const;

	//distance between the vector and 0,0,0. Keeps original
	float Magnitude() const;
	float MagnitudeSquared() const;
	//gets distance between two vectors. keeps original
	float Magnitude(const Vector3<T>& vec1, const Vector3<T>& vec2) const;
	float MagnitudeSquared(const Vector3<T>& vec1, const Vector3<T>& vec2) const;

	//normalise vector
	Vector3<T> Normalise();
	//return a copy of the normalised vector
	Vector3<T> Normalised() const;


public:
	T x;
	T y;
	T z;
};

typedef Vector3<int> Vector3i;
typedef Vector3<float> Vector3f;
typedef Vector3<double> Vector3d;

//Constructor for new Vector3
template <typename T>
Vector3<T>::Vector3(T _x, T _y, T _z) : x(_x), y(_y), z(_z)
{
}

//constructor from another vector
template <typename T>
Vector3<T>::Vector3(const Vector3<T>& other) : x(other.x), y(other.y), z(other.z)
{
}


template <typename T>
Vector3<T> Vector3<T>::operator + (const Vector3<T>& other) const
{
	return Vector3<T>(x + other.x, y + other.y, z + other.z);
}

template <typename T>
Vector3<T> Vector3<T>::operator += (const Vector3<T>& other)
{
	x += other.x;
	y += other.y;
	z += other.z;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator + (T other) const
{
	return Vector3<T>(x + other, y + other, z + other);
};

template <typename T>
Vector3<T> Vector3<T>::operator += (T other)
{
	x += other;
	y += other;
	z += other;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator - (const Vector3<T>& other) const
{
	return Vector3<T>(x - other.x, y - other.y, z - other.z);
}

template <typename T>
Vector3<T> Vector3<T>::operator -= (const Vector3<T>& other)
{
	x -= other.x;
	y -= other.y;
	z -= other.z;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator - (T other) const
{
	return Vector3<T>(x - other, y - other, z - other);
};

template <typename T>
Vector3<T> Vector3<T>::operator -= (T other)
{
	x -= other;
	y -= other;
	z -= other;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator / (const Vector3<T>& other) const
{
	return Vector3<T>(x / other.x, y / other.y, z / other.z);
}

template <typename T>
Vector3<T> Vector3<T>::operator /= (const Vector3<T>& other)
{
	x /= other.x;
	y /= other.y;
	z /= other.z;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator / (T other) const
{
	return Vector3<T>(x / other, y / other, z / other);
};

template <typename T>
Vector3<T> Vector3<T>::operator /= (T other)
{
	x /= other;
	y /= other;
	z /= other;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator * (const Vector3<T>& other) const
{
	return Vector3<T>(x * other.x, y * other.y, z * other.z);
}

template <typename T>
Vector3<T> Vector3<T>::operator *= (const Vector3<T>& other)
{
	x *= other.x;
	y *= other.y;
	z *= other.z;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator * (T other) const
{
	return Vector3<T>(x * other, y * other, z * other);
};

template <typename T>
Vector3<T> Vector3<T>::operator *= (T other)
{
	x *= other;
	y *= other;
	z *= other;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::operator = (const Vector3<T>& other)
{
	x = other.x;
	y = other.y;
	z = other.z;

	return *this;
}


template <typename T>
bool Vector3<T>::operator == (const Vector3<T>& other) const
{
	return (x == other.x && y == other.y && z == other.z);
}

template <typename T>
bool Vector3<T>::operator != (const Vector3<T>& other) const
{
	return (x != other.x || y != other.y || z != other.z);
}

template <typename T>
float Vector3<T>::Magnitude() const
{
	return sqrt(x * x + y * y + z * z);
}

template <typename T>
float Vector3<T>::MagnitudeSquared() const
{
	return x * x + y * y + z * z;
}

template <typename T>
float Vector3<T>::Magnitude(const Vector3<T>& vec1, const Vector3<T>& vec2) const
{
	Vector3<T> temp = vec2 - vec1;
	float mag = temp.Magnitude();
	return mag;
}

template <typename T>
float Vector3<T>::MagnitudeSquared(const Vector3<T>& vec1, const Vector3<T>& vec2) const
{
	Vector3<T> temp = vec2 - vec1;
	float sqrmag = temp.MagnitudeSquared();
	return sqrmag;
}

template <typename T>
Vector3<T> Vector3<T>::Normalise()
{
	float mag = Magnitude();

	if (mag > 0)
	{
		x = x / mag;
		y = y / mag;
		z = z / mag;
	}

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::Normalised() const
{
	float mag = Magnitude();
	Vector3<T> temp;

	if (mag > 0)
	{
		temp.x = x / mag;
		temp.y = y / mag;
		temp.z = z / mag;
	}

	return temp;
}

template <typename T>
float Vector3<T>::operator | (const Vector3<T>& other) const
{
	return (x * other.x) + (y * other.y) + (z * other.z);
}

template <typename T>
Vector3<T> Vector3<T>::operator ^ (const Vector3<T>& other) const
{
	Vector3<T> toReturn;
	toReturn.x = y * other.z - z * other.y;
	toReturn.y = z * other.x - x * other.z;
	toReturn.z = x * other.y - y * other.x;

	return toReturn;
}
