#pragma once
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
	Vector3<T> operator + (float other) const;
	//add numbr to original vector
	Vector3<T> operator += (float other);

	//minus
	Vector3<T> operator - (const Vector3<T>& other) const;
	Vector3<T> operator -= (const Vector3<T>& other);
	Vector3<T> operator - (float other) const;
	Vector3<T> operator -= (float other);

	//divide
	Vector3<T> operator / (const Vector3<T>& other) const;
	Vector3<T> operator /= (const Vector3<T>& other);
	Vector3<T> operator / (float other) const;
	Vector3<T> operator /= (float other);

	//multiply
	Vector3<T> operator * (const Vector3<T>& other) const;
	Vector3<T> operator *= (const Vector3<T>& other);
	Vector3<T> operator * (float other) const;
	Vector3<T> operator *= (float other);


	//dot product of other. Copies the vectors and normalises them, then calculates dot.
	float operator | (const Vector3<T>& other) const;
	//cross product (returns z as float)
	Vector3<T> operator ^ (const Vector3<T>& other) const;

	//vector equal another
	Vector3<T> operator = (const Vector3<T>& other);

	//check if vector equals another
	bool operator == (const Vector3<T>& other) const;
	bool operator != (const Vector3<T>& other) const;

	//magnitude and magnitude squared of self. Keeps original
	float Magnitude() const;
	float MagnitudeSquared() const;
	//magnitude and magnitude squared of self and other. keeps original
	float Magnitude(const Vector3<T>& vec1, const Vector3<T>& vec2) const;
	float MagnitudeSquared(const Vector3<T>& vec1, const Vector3<T>& vec2) const;

	//normalise vector
	Vector3<T> Normalise();
	//normalise other, keep original
	Vector3<T> Normalise(Vector3<T>& other) const;


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
Vector3<T> Vector3<T>::operator + (float other) const
{
	return Vector3<T>(x + other, y + other, z + other);
};

template <typename T>
Vector3<T> Vector3<T>::operator += (float other)
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
Vector3<T> Vector3<T>::operator - (float other) const
{
	return Vector3<T>(x - other, y - other, z - other);
};

template <typename T>
Vector3<T> Vector3<T>::operator -= (float other)
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
Vector3<T> Vector3<T>::operator / (float other) const
{
	return Vector3<T>(x / other, y / other, z / other);
};

template <typename T>
Vector3<T> Vector3<T>::operator /= (float other)
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
Vector3<T> Vector3<T>::operator * (float other) const
{
	return Vector3<T>(x * other, y * other, z * other);
};

template <typename T>
Vector3<T> Vector3<T>::operator *= (float other)
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
	return sqrt(vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z);
}

template <typename T>
float Vector3<T>::MagnitudeSquared(const Vector3<T>& vec1, const Vector3<T>& vec2) const
{
	return vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;
}

template <typename T>
Vector3<T> Vector3<T>::Normalise()
{
	float mag = Magnitude();

	x = x / mag;
	y = y / mag;
	z = z / mag;

	return *this;
}

template <typename T>
Vector3<T> Vector3<T>::Normalise(Vector3<T>& other) const
{
	float mag = other.Magnitude();

	other.x = other.x / mag;
	other.y = other.y / mag;
	other.z = other.z / mag;

	return other;
}

template <typename T>
float Vector3<T>::operator | (const Vector3<T>& other) const
{
	Vector3<T> temp = *this;
	temp.Normalise();
	Vector3<T> temp2 = other;
	temp2.Normalise();

	return (temp.x * temp2.x) + (temp.y * temp2.y) + (temp.z * temp2.z);
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
