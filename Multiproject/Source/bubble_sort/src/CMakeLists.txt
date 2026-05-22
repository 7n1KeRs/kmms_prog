target_sources(${LIBRARY}
	PRIVATE
		bubble_sort.cpp
	PUBLIC
		bubble_sort.hpp
)

target_include_directories(${LIBRARY} PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)

add_executable(${PROJECT_NAME} main.cpp bubble_sort.cpp)