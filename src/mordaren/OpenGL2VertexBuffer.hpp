#pragma once

#include <utki/Buf.hpp>

#include <r4/vector2.hpp>

#include <morda/render/VertexBuffer.hpp>

#include "OpenGL2Buffer.hpp"

namespace mordaren{

class OpenGL2VertexBuffer : public morda::VertexBuffer, public OpenGL2Buffer{
public:
	const GLint numComponents;
	const GLenum type;

	OpenGL2VertexBuffer(const utki::Buf<r4::vec4f> vertices);

	OpenGL2VertexBuffer(const utki::Buf<r4::vec3f> vertices);

	OpenGL2VertexBuffer(const utki::Buf<r4::vec2f> vertices);

	OpenGL2VertexBuffer(const utki::Buf<float> vertices);

	OpenGL2VertexBuffer(const OpenGL2VertexBuffer&) = delete;
	OpenGL2VertexBuffer& operator=(const OpenGL2VertexBuffer&) = delete;

private:
	void init(GLsizeiptr size, const GLvoid* data);
};


}
