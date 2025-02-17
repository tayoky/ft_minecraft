#ifndef SKYBOX_HPP
# define SKYBOX_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <glm/glm.hpp>
# include <stdio.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


#include <classes/VAO/VertexArrayObjectHandler.hpp>
#include <classes/Texture/Texture.hpp>
#include <string>
#include <stb/stb_image.h>
# include <filesystem>
#include "u_types.h"


class SkyBox
{
	public:
		SkyBox(Shader *skyBoxShader);
		~SkyBox();


		void drawSkybox(glm::mat4 view, glm::mat4 proj, glm::vec3 pos);

		
		
		void replace(int x, int y);
		void setRenderDistance(unsigned int renderDistance);
		std::vector<unsigned int> indices = {0, 1, 2};
		Shader *shader;

		std::vector<VertexArrayObject*> VAO;
		std::vector<std::vector<float>> vertices;
		std::vector<std::vector<u_int>> shape;
		std::vector<Texture> texture;

		unsigned int skyboxVAO, skyboxVBO;
		unsigned int cubemapTexture;
		

	private:
};







#endif