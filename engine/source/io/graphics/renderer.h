#pragma once
#include "utility/stl.h"
#include "graphics_api.h"

struct GLFWwindow;

namespace io::graphics
{
	class Renderer
	{
	private:
		std::unique_ptr<GraphicsAPI> graphicsAPI_;
		std::shared_ptr<PipelineState> pipelineState_;

	public:
		Renderer(GLFWwindow& _window);

	public:
		void BeginFrame();
		void SetPipelineState(std::shared_ptr<PipelineState> _pipelineState);
		void Render();
		void EndFrame();
	};
}