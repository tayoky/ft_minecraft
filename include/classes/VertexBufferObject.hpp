#pragma once

#include <vector>
#include <glad/glad.h>
#include <classes/vertexData.hpp>
#include "u_types.h"

class VertexBufferObject {
public:
    VertexBufferObject(t_vertexData& vertexData);

	void Bind();
	void DeleteBuffers();
    int GetSize() const;
private:
    unsigned int index;
    int verticesSize;
};