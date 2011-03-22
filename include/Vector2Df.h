#ifndef VECTOR2DF_H
#define	VECTOR2DF_H

namespace FenrirMath {

	class Vector2Df {

	public:
		Vector2Df();
		Vector2Df(float x, float y);
		virtual ~Vector2Df();

		void setPosition(float x, float y);
		void setPosition(Vector2Df vec);
		void setX(float x);
		void setY(float y);

		Vector2Df getPosition();
		float getX();
		float getY();

		Vector2Df operator +(const Vector2Df& vec);
		Vector2Df& operator +=(const Vector2Df& vec);
		Vector2Df operator -(const Vector2Df& vec);
		Vector2Df& operator -=(const Vector2Df& vec);
		float operator *(const Vector2Df& vec);
		Vector2Df operator *(const int& constant);
		Vector2Df& operator *=(const int& constant);
		Vector2Df operator *(const float& constant);
		Vector2Df& operator *=(const float& constant);

	protected:
		float x,y;

	};

}

#endif	/* VECTOR2DF_H */

