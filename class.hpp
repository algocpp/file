
// algocpp/file/class.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_FILE_CLASS
#define ALGOCPP_FILE_CLASS

#include <string>

namespace algocpp
{
	namespace file
	{
		class File
		{
		private:
			std::string filename;

		public:
			File(std::string filename);
		};

		File::File(std::string init)
		{
			filename = init;
		}

	}
}

#endif // ALGOCPP_FILE_CLASS