#include "OpenGL2IndexBuffer.hpp"

#include "OpenGL2_util.hpp"

#include <GL/glew.h>

using namespace mordaren;

OpenGL2IndexBuffer::OpenGL2IndexBuffer(utki::span<const std::uint16_t> indices) :
		elementType(GL_UNSIGNED_SHORT),
		elementsCount(GLsizei(indices.size()))
{	
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, this->buffer);
	assertOpenGLNoError();
	
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size_bytes(), &*indices.begin(), GL_STATIC_DRAW);
	assertOpenGLNoError();
}
