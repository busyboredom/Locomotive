#Bring the headers
include_directories(include)
 
#To manually add the sources:
#set(SOURCES src/file1.cpp src/file2.cpp)
 
#Or automatically:
file(GLOB SOURCES "*.cpp")

add_executable(Sandbox ${SOURCES})

link_directories(PROJECT_SOURCE_DIR/Locomotive/src/Locomotive)
target_link_libraries(Sandbox Locomotive)
