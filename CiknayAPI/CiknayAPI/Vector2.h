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
	//add to oiginal vector
	Vector2<T> operator += (const Vector2<T>& other);
	//add numbr to a copy of vector
	Vector2<T> operator + (float other) const;
	//add numbr to original vector
	Vector2<T> operator += (float other);

	//minus
	Vector2<T> operator - (const Vector2<T>& other) const;	
	Vector2<T> operator -= (const Vector2<T>& other);
	Vector2<T> operator - (float other) const;
	Vector2<T> operator -= (float other);
	
	//divide
	Vector2<T> operator / (const Vector2<T>& other) const;
	Vector2<T> operator /= (const Vector2<T>& other);
	Vector2<T> operator / (float other) const;
	Vector2<T> operator /= (float other);

	//multiply
	Vector2<T> operator * (const Vector2<T>& other) const;
	Vector2<T> operator *= (const Vector2<T>& other);
	Vector2<T> operator * (float other) const;
	Vector2<T> operator *= (float other);
	
	//copy vector to another
	Vector2<T>& operator = (const Vector2<T>& other);
	
	//check if vector equals another
	bool operator == (const Vector2<T>& other) const;
	bool operator != (const Vector2<T>& other) const;

	//magnitude and magnitude squared of self. Will overwrite
	float Magnitude() const;
	float MagnitudeSquared() const;

	//magnitude and magnitude squared of self and other. keeps original
	float Magnitude(const Vector2<T>& vec1, const Vector2<T>& vec2) const;
	float MagnitudeSquared(const Vector2<T>& vec1, const Vector2<T>& vec2) const;

	//dot product of other
	float Dot(const Vector2<T>& vec1, const Vector2<T>& vec2) const;

	//normalise vector
	Vector2<T> Normalise() const;


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
Vector2<T> Vector2<T>::operator + (float other) const
{
	return Vector2<T>(x + other, y + other);
};

template <typename T>
Vector2<T> Vector2<T>::operator += (float other)
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
Vector2<T> Vector2<T>::operator - (float other) const
{
	return Vector2<T>(x - other, y - other);
};

template <typename T>
Vector2<T> Vector2<T>::operator -= (float other)
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
Vector2<T> Vector2<T>::operator / (float other) const
{
	return Vector2<T>(x / other, y / other);
};

template <typename T>
Vector2<T> Vector2<T>::operator /= (float other)
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
Vector2<T> Vector2<T>::operator * (float other) const
{
	return Vector2<T>(x * other, y * other);
};

template <typename T>
Vector2<T> Vector2<T>::operator *= (float other)
{
	x *= other;
	y *= other;

	return *this;
}

template <typename T>
Vector2<T>& Vector2<T>::operator = (const Vector2<T>& other)
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
	return !(*this != other);
}

template <typename T>
float Vector2<T>::Magnitude() const
{
	return sqrt(x * x + y * y);
}

template <typename T>
float Vector2<T>::MagnitudeSquared() const
{
	return x * x + y * y;
}

template <typename T>
float Vector2<T>::Magnitude(const Vector2<T>& vec1, const Vector2<T>& vec2) const
{
	return sqrt(vec1.x * vec2.x + vec1.y * vec2.);
}

template <typename T>
float Vector2<T>::MagnitudeSquared(const Vector2<T>& vec1, const Vector2<T>& vec2) const
{
	return vec1.x * vec2.x + vec1.y * vec2.y;
}

template <typename T>
float Vector2<T>::Dot(const Vector2<T>& vec1, const Vector2<T>& vec2) const
{
	return (vec1.x * vec2.x) + (vec1.y * vec2.y);
}

template <typename T>
Vector2<T> Vector2<T>::Normalise() const
{
	const float mag = Magnitude();

	return Vector2<T>(static_cast<T>(x / mag), static_cast<T>(y / mag));
}