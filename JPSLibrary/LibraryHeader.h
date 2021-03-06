#ifdef JPSLIBRARY_EXPORTS
#define JPSLIBRARYDLL_API __declspec(dllexport) 
#else
#define JPSLIBRARYDLL_API __declspec(dllimport) 
#endif

namespace JPSLibNamespace{
	class JPSLibLoadFunctions
	{
		public:
			//Loads a vector of a certain number of int elements
			//x[] = vector
			//count = number of elements
			static JPSLIBRARYDLL_API void loadVectorInt(int x[], int count);

			//Loads a vector of a certain number of int elemnts that can stop with a particular number
			//x[] = vector
			//term = ending number
			//max = max number of elements
			//RETURN =  the effective number of elements in the vector
			static JPSLIBRARYDLL_API int loadVectorIntWithTerm(int x[], int term, int max);
	};

	class JPSSearchFunctions
	{
		public:

			/*
			Return the position of te ITEM int the X vector
			*/
			static JPSLIBRARYDLL_API int findIntItemInVector(int x[], int item, int max);

			/*
			Return the position of the  ITEM int the X vector
			Order False = from 0 to MAX
			Order True = from MAX to 0
			*/
			static JPSLIBRARYDLL_API int findItemInOrdereVector(int x[], int item, int max, bool order);
	};
}

